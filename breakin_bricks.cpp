#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,w1,w2,w3;
        cin>>s>>w1>>w2>>w3;
       int sum=w1+w2+w3;
       if(sum<=s)
       {
           cout<<1<<endl;
       }
       else
       {
           int sum1=w1+w2;
           int sum2=w2+w3;
           if(sum1<=s || sum2<=s)
           {
               cout<<2<<endl;
           }
           else
           {
               cout<<3<<endl;
           }
           
       }
    }
}