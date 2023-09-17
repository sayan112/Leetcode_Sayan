class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      unordered_map<string,int>mp;
         for(auto elem : words)
         {
             mp[elem]++;
         }
      priority_queue<pair<int,string>>pq;
        for(auto elem : mp)
        {
            pq.push({-elem.second,elem.first});
             if(pq.size()>k)
             {
                 pq.pop();
             }
          
        }
         vector<string>ans;
         
       while(pq.size())
       {
 ans.push_back(pq.top().second);
           pq.pop();
       }
        reverse(ans.begin(),ans.end());
         return  ans;
    }
};