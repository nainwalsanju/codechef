#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    int num[1000];
    cin>>n>>k;
    while(k--)
    {
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        next_permutation(num,num+n);
        for(int i=0;i<n;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    
}