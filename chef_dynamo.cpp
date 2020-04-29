 #include<bits/stdc++.h>
 using namespace std;
 #define long long int
 int main()
 {
    int t,ch;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d,e,s,sum=0;
        cin>>n;
        cin>>a;
        sum=sum+a;
        a=a-2;
        s=2*pow(10.0,n)+a;
        cout<<s<<endl;
        fflush(stdout);
        cin>>b;
        sum=sum+b;
        c= pow(10.0,n)-b-1;
        sum=sum+c;
        cout<<c<<endl;

        fflush(stdout);
        cin>>d;
        sum=sum+d;
        e=pow(10.0,n)-d-1;
        sum=sum+e;
        cout<<e<<endl;
        fflush(stdout);
        if(sum==s)
        {
        cout<<1<<'\n';
        fflush(stdout);
        }
        else
        {
            cout<<-1<<'\n';
            fflush(stdout);
            exit(0);
        }
    }
     
 }