#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a;
    int q;
    vector<int> :: iterator index;
    vector<int> output;
    for(int i=0;i<n+m;i++)
    {   

        cin>>q;
        if(q==-1)
        {
            int m= *max_element(a.begin(),a.end());
            output.push_back(m);
            for(index=a.begin();index<a.end();index++)
            {
                if(*index==m)
                {    
                    break;
                }
            }
            a.erase(index);
        }
        else
        {    
        a.push_back(q);
        }
    }

    for (index=output.begin();index!=output.end();index++)
    {
        cout<<*index<<endl;
    }
}