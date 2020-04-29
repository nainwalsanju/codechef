#include<bits/stdc++.h>
using namespace std;
//find maximum pairs in an array such that x>y/2
vector<pair<int,int>> ans;
void calc(pair<int,int> a[],int n)
{
    if(n<=0)
        return;
    else if(a[n].first>2*a[n-1].first)
        calc(a,n-1);
    else
    {
        ans.push_back(make_pair(a[n].second,a[n-1].second));
        calc(a,n-2);
    }
}

void solve()
{
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    ans.clear();
    sort(a,a+n);
    calc(a,n-1);
    cout<<2*ans.size()<<endl;
    for(auto i:ans)
        cout<<i.first<<" "<<i.second<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}