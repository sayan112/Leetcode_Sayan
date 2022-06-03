class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
unordered_map<int,int>mp;
         for (auto elem : nums)
         {
             mp[elem]++;
         }
         nums.clear();
         for(auto elem : mp)
         {
             nums.push_back(elem.first);
         }
        sort(nums.begin(),nums.end());
        
        return mp.size() ;
        
        
    }
};