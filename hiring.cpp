/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Write code here

	int n,p;
	cin>>n>>p;
	vector<vector<int> > v(n);
    vector<int>::iterator it,it2; 
	int a,b;
    bool insert1,insert2;
	for(int i=0;i<p;i++)
	{
        insert1=true;
        insert2=true;
		cin>>a>>b;
        for(int j=0;j<i;j++)
        {
            it = find (v[j].begin(), v[j].end(), a); 
            it2 = find (v[j].begin(), v[j].end(), b); 
            if(it!=v[j].end())
            {
                insert1=false;
                insert2=false;
                v[j].push_back(b);
            }
            else if(it2!=v[j].end())
            {
                insert1=false;
                insert2=false;
                v[j].push_back(a);
            }
        }
        if(insert1==true)
        {
        v[i].push_back(a);
        }
        if(insert2==true)
        {
        v[i].push_back(b);
        }
	}


    int count=0;
    int total=1;
    for(int i=0;i<v.size();i++)
    {
        count=v[i].size();
        if(count>0)
            total=total*count;
    }
    cout<<total<<endl;
}
