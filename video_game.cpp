#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int j=0;
    char op;
    bool carry=false;
    while(1)
    {
        cin>>op;
        if(op=='1' && j>0)
        {
            j--;
        }
        else if(op=='2' && j<n-1)
        {
            j++;
        }
        else if(op=='3' && a[j]!=0 && carry==false)
        {
            a[j]--;
            carry=true;
        }
        else if(op=='4' && a[j]<h && carry==true)
        {
            a[j]++;
            carry=false;
        }
        else if(op=='0')
        {
            break;
        }
        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}