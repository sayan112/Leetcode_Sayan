class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char,int>mp;
         for(auto elem : s)
         {
             mp[elem]++;
         }
         priority_queue<pair<int,char>>pq;
    
              for(auto elem : mp)
         {
            pq.push({elem.second,elem.first});
         }
         string ans ;
        while(!pq.empty())
        {
            auto elem =pq.top();
             while(elem.first--)
             {
                 ans+=elem.second;
             }
            pq.pop();
        }
         return ans ;
    }
};