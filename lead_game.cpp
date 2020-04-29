#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p1[n],p2[n];
    int lead=0,winner=0;
    for(int i=0;i<n;i++)
        cin>>p1[i]>>p2[i];
    
    int pl1=0,pl2=0;
    for(int i=0;i<n;i++)
    {
        pl1+=p1[i];
        pl2+=p2[i];
        int temp=abs(pl1-pl2);
        int temp2=(pl1>pl2)?1:2;
        if(temp>lead)
        {
            lead=temp;
            winner=temp2;
        }
    }

    cout<<winner<<" "<<lead;

}