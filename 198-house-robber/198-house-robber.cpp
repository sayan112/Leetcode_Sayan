class Solution {
public:
     int  getrob(vector<int>& nums, int idx, unordered_map<int,int>&mp )
     {
          if(idx==0)
          {
             return  nums[idx];
          }
         if(idx<0)
         {
             return 0;
         }
          int currentkey=idx;
         if(mp.find(currentkey)!=mp.end())
         {
             return mp[currentkey];
         }
         int pick = nums[idx]+ getrob (nums,idx-2,mp);
         int non_pick= getrob (nums,idx-1,mp);
       mp[currentkey]=max(pick, non_pick);
          return  mp[currentkey];
     }
    int rob(vector<int>& nums) {
        int idx=nums.size()-1;
        unordered_map<int,int>mp;
        
     return    getrob (nums,idx,mp);
        
    }
};