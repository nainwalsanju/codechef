#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 
bool sort2(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (b.second > a.second); 
} 

int main()
{    
        int n=5;
        int a[5]={3,3,1,2,1};
        unordered_map<int, int> :: iterator it;
        std::vector<std::pair<int, int> > mapVector;
        std::unordered_map<int, int> map1;
        for(int i=0;i<n;i++)
        {
            map1[a[i]]++;
        }
        for (auto iterator = map1.begin(); iterator != map1.end(); ++iterator )
        {
            mapVector.push_back(*iterator);
        }
        reverse(mapVector.begin(),mapVector.end());
        sort(mapVector.begin(), mapVector.end(),sort2);
         reverse(mapVector.begin(),mapVector.end()); 
        vector<vector<int> > ans(mapVector.size());
        int k=0;
        for (int i = 0; i<mapVector.size(); i++) 
        { 
          ans[i].push_back(mapVector[i].first);
          ans[i].push_back(mapVector[i].second);  
        }
        for (int i=0; i<ans.size(); i++) 
        { 
        cout<<ans[i][0]<<" "<< ans[i][1] << endl; 
        } 

        
}