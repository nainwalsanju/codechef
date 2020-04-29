#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int rem=0;
	    int flag=0,i;
	    for(i=0;i<n;i++)
	    {
	        rem=rem+a[i];
	        if(rem>=k)
	        {
	            rem=rem-k;
	        }
	        else
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO "<<i+1<<endl;
	    }
	}
	return 0;
}

