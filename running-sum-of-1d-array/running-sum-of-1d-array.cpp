class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
          vector<int>prefixsum;
        int sum =0;
         for (int i = 0; i < nums.size(); i++)
         {
             sum+=nums[i];
             prefixsum.push_back(sum);
         }
         return prefixsum; 
    }
};