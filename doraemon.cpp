#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        int pairs=0,pair;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                pair=1;
                int start_j=j-1;
                int end_j=j+1;
                int start_i=i-1;
                int end_i=i+1;
                
                while(start_j>=0 && end_j<=m-1 && start_i>=0 && end_i<=n-1)
                {
                    if(a[i][start_j]==a[i][end_j] && a[start_i][j]==a[end_i][j] )
                    {
                        pair++;
                        start_i=start_i-1;
                        end_i+=1;
                        start_j=start_j-1;
                        end_j+=1;
                    }
                    else
                    {
                        break;
                    }
                }
                pairs+=pair;
            }
        }
        t--;
        cout<<pairs<<endl;       
    }
}