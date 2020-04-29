#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        int t[q];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<q;j++)
        {
            cin>>t[j];
        }
        int max_here[n];
        max_here[0]=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]>max_here[i-1])
            {
                max_here[i]=a[i];
            }
            else
            {
                max_here[i]=max_here[i-1];
            }
            
        }
        for(int i=0;i<q;i++)
        {
            cout<<max_here[t[i]-1]<<" ";
        }

    }
}