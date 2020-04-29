#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int f[n];
        for(int i=0;i<n;i++)
            cin>>f[i];
        int p[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        
        int r[m+1]={0};
        bool r2[m+1]={false};
        for(int i=0;i<n;i++)
        {
            r[f[i]]+=p[i];
            r2[f[i]]=true;
        }

        int min=9999;
        for(int i=0;i<m;i++)
        {
            if(r[i]<min && r2[i]==true)
            {
                min=r[i];
            }
        }
        cout<<min<<endl;

        


    }
}