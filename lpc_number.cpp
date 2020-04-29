#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int convert(string a,int len)
{
    int num=0;
    for(int j=0;j<len;j++)
    {
        num=num*10+(a[j]-'0');
    }
    return num;
}

char* conv_string(int num)
{
    stack<char> s;
    int len=0;
    while(num!=0)
    {
        int rem=num%10;
        s.push(rem+'0');
        num=num/10;
        len++;
    } 
    char ans[len];
    int i=0;
    while(!s.empty()) 
    {
       ans[i]=s.top();
       s.pop(); 
       i++;
    } 
    ans[len]='\0';
    return ans;
}

int main()
{
    int num,count=0;
    cin>>num;
    while(num--)
    {
        char *a=conv_string(num);
        cout<<a; 
        int len=strlen(a);
        int original=convert(a,len);
        sort(a,a+len);

        while(next_permutation(a,a+len))
        {
            int num1=convert(a,len);
            cout<<num1<<endl;
            if(num1>=original)
                count++;
        }
    }
    cout<<count;

}   