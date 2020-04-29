#include<bits/stdc++.h>

using namespace std;

string reverse_words(string s) 
{
    reverse(s.begin(), s.end());
    string tmp;
    string res;
    for(int i=0;i<s.size();i++) 
    {
            if (s[i]==' ') 
            {
                reverse(tmp.begin(), tmp.end());
                res+=tmp;
                res+=' ';
                tmp.clear();
            } 
            else 
            {
                tmp+=s[i];
            }
    }
    reverse(tmp.begin(), tmp.end());
    res+=tmp;
    return res;
}

string new_string(string str)
{
    string ans="";
    int n=str.length();
        for(int i=0;i<n;i++)
        {
            if(str[i] != '.' && str[i] != '\'' && str[i] != ',' && str[i] != ';' && str[i] != ':')
            {
                ans += str[i];
            }
        }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    n=n+1;
    vector<string>text(n);
    
    for(int i=0;i<n;++i)
    {
        getline(cin,text[i]);
    }



    for(int i=n-1;i>=0;--i)
    {
        string str=text[i];
        string ans=new_string(str);
        cout<<reverse_words(ans)<<endl;
    }

}