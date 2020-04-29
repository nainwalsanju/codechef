#include<bits/stdc++.h>
using namespace std;

int main()
{
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
        map<int,int> mp;
        int max=*max_element(a,a+n);
        int books=0;
        int people=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=max)
            {
                books=books+(max-a[i]);
                people++;
            }
        }
        cout<<books<<" "<<people+1<<endl;



    }
}