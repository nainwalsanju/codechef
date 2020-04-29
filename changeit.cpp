#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

        if(n==1)
        {
            cout<<0<<endl;
        }
        else if(n==2)
        {
            if(a[0]!=a[1])
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            int moves=0;
            map <int,int> m;
             map <int,int>::iterator it;;
            for(int i=0;i<n;i++)
            {
                m[a[i]]++;
            }
            int size=m.size();
            int max=0,value;
             for(it=m.begin();it!=m.end();it++)
            {
                if(it->second>max)
                {
                  max=it->second;
                  value=it->first;
                }
            }

            for(int i=0;i<n;i++)
            {
                if(a[i]!=value)
                {
                    moves++;
                }
            }
            cout<<moves<<endl;
        }
	}
	return 0;
}