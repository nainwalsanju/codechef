#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int l1,l2,l3;

    map<int,int> output;
    for(int i=0;i<n1;i++)
    {
        cin>>l1;
        output[l1]++;
    }
    for(int i=0;i<n2;i++)
    {
        cin>>l2;
        output[l2]++;
    }
    for(int i=0;i<n3;i++)
    {
        cin>>l3;
        output[l3]++;
    }
    map<int,int> :: iterator it;
    cout<<"++++++++OUTPUT++++++++++"<<endl;
    int c=0;
    for(it=output.begin();it!=output.end();it++)
    {
        if(it->second>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
    for(it=output.begin();it!=output.end();it++)
    {
        if(it->second>=2)
        {
            cout<<it->first<<endl;
        }
    }

}