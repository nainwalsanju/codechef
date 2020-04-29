#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,q;
    cin>>n>>q;
    ll l,r;
    ll a[n];
    ll pair[q][2];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<q;i++)
    {
        cin>>pair[i][0]>>pair[i][1];
    }
    ll dec[n]={0};
    ll inc[n]={0};
    ll len1=1,len2=1,cnt1=0,cnt2=0,prev_cnt1=0,prev_cnt2=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
            {
                len1++;
                inc[i]=prev_cnt1;
            }
        else
        {
            if(len1>1)
                cnt1++;
            len1=1;
            inc[i]=cnt1;
            prev_cnt1=cnt1;
        }
        if(a[i+1]<a[i])
            {
                len2++;
                dec[i]=prev_cnt2;
            }
        else
        {
            if(len2>1)
                cnt2++;
            len2=1;
            dec[i]=cnt2;
            prev_cnt2=cnt2;
        }
    }
    if(len1>1)
        inc[n-1]= ++cnt1;
    else
        inc[n-1]=prev_cnt1;
    if(len2>1)
        dec[n-1]= ++cnt2;
    else
        dec[n-1]=prev_cnt2;

    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(ll i=0;i<n;i++)
        cout<<inc[i]<<" ";
        cout<<endl;
    for(ll i=0;i<n;i++)
        cout<<dec[i]<<" ";
    ll j=0;
    while(j<q)
    {
        l=pair[j][0];
        r=pair[j][1];
        ll x=inc[r-1]-inc[l-1];
        ll y=dec[r-1]-dec[l-1];
        if(x==y && x!=0 and y!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        j++;
    }
}