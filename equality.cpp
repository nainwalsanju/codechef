#include<bits/stdc++.h>
using namespace std;

int lenOfLongIncSubArr(int arr[], int n,int p,int q) 
{  
	int cnt = 0;
    int len = 1; 
    int cnt2= 0; 
	int len2= 1; 
    for (int i=p-1; i <=q-2; ++i) 
    { 
        if (arr[i + 1] > arr[i]) 
            len++; 
        else
        { 
           if(len>1)
                cnt++;
            len = 1; 
        } 
        if (arr[i + 1] < arr[i]) 
			len2++; 
		else 
        { 
            if(len2>1)
                cnt2++;
			len2= 1; 
		} 
    } 
    if (len > 1) 
        {
        cnt++;
        } 
    if (len2 > 1)
    {
        cnt2++;
    } 
  
    if(cnt==cnt2 && cnt!=0 && cnt2!=0)
        return 1;
    else
    {
        return 0;
    }
    
} 


int main()
{
    int n,q;
    cin>>n>>q;
    int l,r;
    int a[n];
    int pair[q][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>pair[i][0]>>pair[i][1];
    }
    int j=0;
    while(j<q)
    {
        l=pair[j][0];
        r=pair[j][1];
        int len1=lenOfLongIncSubArr(a,n,l,r);
        if(len1==1)
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