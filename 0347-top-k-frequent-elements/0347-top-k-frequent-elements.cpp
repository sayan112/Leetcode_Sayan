class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
            vector<int> ans;
            unordered_map<int, int> mp;

            for (auto &elem: nums)
            {
                mp[elem]++;
            }
            
            priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>> pq;

            for (auto &elem: mp)
            {
                pq.push({ elem.second,
                    elem.first });
                 if(pq.size()>k)
                 {
                     pq.pop();
                 }
            }
            
            while(pq.size())
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
             

            return ans;
        }
};