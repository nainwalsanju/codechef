#include<bits/stdc++.h>
using namespace std;


int func(int a[],int n)
{
    int inc[n]={0};
    int len=1,cnt=0,prev_cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
            {
                len++;
                inc[i]=prev_cnt;
            }
        else
        {
            if(len>1)
                cnt++;
            len=1;
            inc[i]=cnt;
            prev_cnt=cnt;
        }
    }
    if(len>1)
        cnt++;
    inc[n-1]=cnt;
    for(int i=0;i<n;i++)
        cout<<inc[i]<<" ";
    cout<<endl;
    return 0;

}

int func2(int a[],int n)
{
    int dec[n]={0};
    int len=1,cnt=0,prev_cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
            {
                len++;
                dec[i]=prev_cnt;
            }
        else
        {
            if(len>1)
                cnt++;
            len=1;
            dec[i]=cnt;
            prev_cnt=cnt;
        }
    }
    if(len>1)
        cnt++;
    dec[n-1]=cnt;
    for(int i=0;i<n;i++)
        cout<<dec[i]<<" ";
    return 0;

}
