
#include <bits/stdc++.h> 
using namespace std;  

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int table[n][2]; 
        for (int i = 0; i < n; i++) 
            table[i][0] = table[i][1] = 0; 

        for (int i=0; i<(n-1); i++) 
        { 
            table[i + 1][0] = max(table[i][0],table[i][1] + abs(1-a[i])); 
            table[i + 1][1] = max(table[i][0] + abs(a[i+1] - 1),table[i][1] + abs(a[i+1] - a[i])); 
        } 
        for(int i=0;i<n;i++)
        {
            cout<<table[i][0]<<" "<<table[i][1]<<endl;
        }
        cout<<max(table[n-1][0], table[n-1][1])<<endl;
    }
	return 0; 
} 
