class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans;
        unordered_map<int, int>mp;
         for(auto elem : nums1)
         {
             mp[elem]++;
         }
        
        for(auto elem : nums2)
        {
            if(mp.find(elem)!=mp.end())
            {
                ans.push_back(elem);
                mp[elem]--;
                if(mp[elem]==0)
                {
                    mp.erase(elem);
                }
            }
            
        }
        return ans;
    }
};