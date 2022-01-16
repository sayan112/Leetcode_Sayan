class Solution {
public:
    
     int  targetSum(vector<int>& nums,int currentIndx, int target,   unordered_map<string,int>&mp)
     {
         
               if( currentIndx >= nums.size() &&target != 0)
            return 0;
        
      
             if(target == 0 &&  currentIndx==nums.size() )
            return 1;
        
       string currentKey = to_string( currentIndx) + "_" + to_string(target);
        
        if(mp.find(currentKey)!=mp.end()){
           return mp[currentKey];
        }
        
         
        int pick = targetSum(nums,  currentIndx+ 1, target - nums[ currentIndx],mp);
              int nonpick=targetSum(nums, currentIndx + 1, target + nums[ currentIndx],mp);
         mp[currentKey]=pick+nonpick;
          return pick+nonpick;
     }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string ,int>mp;
        return targetSum(nums, 0, target,mp);
    }
};