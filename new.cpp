#include <bits/stdc++.h> 
  
#define mp make_pair 
#define pb push_back 
#define S second 
#define ll long long 
  
using namespace std; 
  
// Using mod because the number 
// of ways might be very large 
const int mod = 1000000007; 
  
const int MAX = 100000; 
  
// ways is serving the same 
// purpose as discussed 
ll ways[MAX + 1]; 
  
void preCompute() 
{ 
    // pairing up zero people 
    // requires one way. 
    ways[0] = 1LL; 
    ways[2] = 1LL; 
    for (int i = 4; i <= MAX; i += 2) { 
        ways[i] = (1LL * (i - 1) * ways[i - 2]) % mod; 
    } 
} 
  
void countWays(int* arr, int n) 
{ 
  
    // map count stores count of s. 
    map<int, int> count; 
    for (int i = 0; i < n; i++) 
        count[arr[i]]++; 
  
    vector<pair<int, int> > count_vector; 
    map<int, int>::iterator it; 
    for (it = count.begin(); it != count.end(); it++) { 
        count_vector.pb(mp(it->first, it->second)); 
    } 
  
    // vector count_vector stores a 
    // pair < value, count of value> 
  
    // sort according to value 
    sort(count_vector.begin(), count_vector.end()); 
  
    ll ans = 1; 
  
    // Iterating backwards. 
    for (int i = count_vector.size() - 1; i > 0; i--) { 
  
        int current_count = count_vector[i].S; 
        int prev_count = count_vector[i - 1].S; 
  
        // Checking if current count is odd. 
        if (current_count & 1) { 
  
            // if current count = 5, multiply ans by ways[4]. 
            ans = (ans * ways[current_count - 1]) % mod; 
  
            // left out person will be selected 
            // in current_count ways 
            ans = (ans * current_count) % mod; 
  
            // left out person will pair with previous 
            //  person in previous_count ways 
            ans = (ans * prev_count) % mod; 
  
            /* if previous count is odd, 
             * then multiply answer by ways[prev_count-1]. 
             * since one has already been reserved, 
             * remaining will be even. 
             * reduce prev_count = 0, since we don't need it now.*/
            if (prev_count & 1) { 
                ans = (ans * ways[prev_count - 1]) % mod; 
                count_vector[i - 1].S = 0; 
            } 
            else { 
  
                /* if prev count is even, one will be reserved, 
                 * therefore decrement by 1. 
                 * In the next iteration, prev_count will become odd 
                 * and it will be handled in the same way.*/
                count_vector[i - 1].S--; 
            } 
        } 
        else { 
  
            /* if current count is even, 
             * then simply multiply ways[current_count] 
             * to answer.*/
            ans = (ans * ways[current_count]) % mod; 
        } 
    } 
  
    /* multiply answer by ways[first__count] since 
       that is left out, after iterating the array.*/
    ans = (ans * ways[count_vector[0].S]) % mod; 
    cout << ans << "\n"; 
} 
  
// Driver code 
int main() 
{ 
    preCompute(); 
    int arr[] = { 2, 3, 3, 3, 3, 4, 4, 4, 4, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    countWays(arr, n); 
    return 0; 
} 