class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int , int >mp;
         for(auto elem : nums)
         {
             mp[elem]++;
         }
        priority_queue<pair<int,int>>pq;
         for(auto elem : mp)
         {
             pq.push({elem.second , elem.first});
         }
         vector<int>ans;
         while(k--)
         {
             ans.push_back(pq.top().second);
             pq.pop();
         }
         return ans;
        
    }
};