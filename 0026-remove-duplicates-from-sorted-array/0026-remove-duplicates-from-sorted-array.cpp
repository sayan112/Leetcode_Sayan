class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        
         int left =0;
      
         for(int i =1;i<nums.size();i++)
         {
             if(nums[i]!=nums[i-1])
             {
                  left++;
                 nums[left]=nums[i];
             }
         }
         return left+1;
    }
};