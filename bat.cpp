#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>c>>n;
    vector<pair<int,int> > cricketers;
    vector<pair<int,int> > bats;

    for(int i=0;i<c;i++)
    {
        int w,p;
        cin>>w>>p;
        cricketers.push_back(make_pair(w,p));
    }
    sort(cricketers.begin(),cricketers.end());
    for(int i=0;i<n;i++)
    {
        int w,p;
        cin>>w>>p;
        bats.push_back(make_pair(w,p));
    }
    sort(bats.begin(),bats.end());
    int count=0;
    for(auto i=cricketers.end()-1;i>=cricketers.begin();i--)
    {
        
    }

}