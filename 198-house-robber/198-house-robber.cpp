class Solution {
public:
    int maxsumnonadj (vector<int>nums, int idx , unordered_map<int,int>&mp)
 {
     if(nums.size()<=idx)
     {
         return 0;
     }
      int curIdx= idx;
     if(mp.find(curIdx)!=mp.end())
     {
         return mp[curIdx];
     }
     
    int non_pick= maxsumnonadj(nums,idx+1,mp);
    int pick=nums[idx]+ maxsumnonadj(nums,idx+2,mp);
    mp[curIdx]= max(non_pick,pick);
      return  mp[curIdx];
 }
    int rob(vector<int>& nums) {
        int idx =0;
  unordered_map<int,int>mp;
   return  maxsumnonadj(nums,idx,mp);
    }
};

