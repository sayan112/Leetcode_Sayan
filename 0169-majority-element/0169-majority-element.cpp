class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=nums.size()/2;
         unordered_map<int,int>mp;
         for(auto elem : nums)
         {
             mp[elem]++;
         }
         for(auto elem: mp)
         {
            if(elem.second>count)
            {
                return elem.first;
            }
         }
         return -1;
    }
};