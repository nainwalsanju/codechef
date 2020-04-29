#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    bool input;
    vector<vector<int> > v(n);
    int i=0;
    while(i<n && cin>>num)
    {
        if(num==-1)
        {
            i++;
        }
        else
        {
            v[i].push_back(num);
        }
        
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}