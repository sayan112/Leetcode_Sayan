class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     unordered_map<int,int>mp;
         for(auto elem : nums)
         {
              mp[elem]++;
             
         }
         vector<int>ans;
        for(auto elem : mp)
        {
             if(elem.second>nums.size()/3)
             {
                 ans.push_back(elem.first);
             }
        }
         return ans ;
    }
};