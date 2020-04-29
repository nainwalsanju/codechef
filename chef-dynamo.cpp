#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t,n,r;
	long long a,b,c,e,s,d,p;
	cin>>t;
	while(t>0)
	{
	    cin>>n;
	    p=pow(10,n);
	    cin>>a;
	    s=2*p+a;
	    cout<<s<<endl;
	    cin>>b;
	    c=p-b;
	    cout<<c<<endl;
	    cin>>d;
	    e=p-d;
	    cout<<e<<endl;
	    int ch;
	    cin>>ch;
	    if(ch==-1)
	        {
	            break;
	        }
	    t--;
	}
	return 0;
}