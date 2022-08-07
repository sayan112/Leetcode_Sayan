class Solution {
public:
     bool isvalid (vector<int>& nums, int idx,unordered_map<int,int>&mp)
     {
          int n = nums.size();
         if(n==idx)
         {
             return true;
         }
        int curIdx=idx;
          if(mp.find(curIdx)!=mp.end())
          {
               return mp[curIdx];
          }
         
         bool valid=false;
         if( idx+1 < n &&  nums[idx]==nums[idx+1])
         {
             valid =   isvalid(nums,idx+2,mp);
             if( idx+2 < n &&   nums[idx]==nums[idx+2])
             {
             valid =  valid ||  isvalid(nums,idx+3,mp);
             }
             
         }
         
          if(   idx+2 < n &&  nums[idx+1]-nums[idx]==1 && nums[idx+2]-nums[idx+1])
          {
                valid =  valid ||  isvalid(nums,idx+3,mp);
          }
         mp[curIdx]=valid;
          return mp[curIdx];
     }
    bool validPartition(vector<int>& nums) {
        int idx =0;
        unordered_map<int,int>mp;
         return  isvalid(nums,idx,mp);
    }
};