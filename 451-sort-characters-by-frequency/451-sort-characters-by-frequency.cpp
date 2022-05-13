class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int>mp;
        
         for(int i=0; i <s.size();i++)
         {
              mp[s[i]]++;
         }
        
         priority_queue<pair<int,char>>pq;
        
         for(auto elem : mp )
         {
             pq.push({elem.second,elem.first});
         }
         
        string ans ="";
         
        while(pq.size())
        {
            auto count = pq.top().first;
            while(count--)
            {
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans ;
        
        
    }
};