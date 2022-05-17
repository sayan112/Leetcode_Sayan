class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
         for(auto elem : nums)
         {
          mp[elem]++;   
         }
         for(auto elem : nums)
         {
              if(mp[elem]==1)
              {
                  return elem;
              }
         }
         return -1;
        
        
    }
};