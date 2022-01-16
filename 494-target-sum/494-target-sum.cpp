class Solution {
public:
    
     int  targetSum(vector<int>& nums,int currentIndx, int target)
     {
             if(target == 0 &&  currentIndx==nums.size() )
            return 1;
        
            if( currentIndx >= nums.size())
            return 0;
        
        int pick = targetSum(nums,  currentIndx+ 1, target - nums[ currentIndx]);
              int nonpick=targetSum(nums, currentIndx + 1, target + nums[ currentIndx]);
         
          return pick+nonpick;
     }
    int findTargetSumWays(vector<int>& nums, int target) {
      
        return targetSum(nums, 0, target);
    }
};