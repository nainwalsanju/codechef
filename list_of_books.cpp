#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>m;
    vector<int> books,output;
    int q;
    int index;
    for(int i=0;i<m;i++)
    {   

        cin>>q; 
        books.push_back(q);
    }
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cin>>index;
        output.push_back(books[index-1]);
        books.erase(books.begin()+index-1);
    }
    vector<int> :: iterator it;
    for (it=output.begin();it!=output.end();it++)
    {
        cout<<*it<<endl;
    }
}