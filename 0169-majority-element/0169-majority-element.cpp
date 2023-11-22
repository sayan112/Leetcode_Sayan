class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int>mp;
         
         int sizeofHalf= nums.size()/2;
        for(auto elem : nums)
        {
         mp[elem]++;     
            
        }
        for(auto elem:mp)
        {
            if(elem.second>sizeofHalf)
            {
                return elem.first;
            }
        }
         return 1;
    }
};