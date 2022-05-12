class Solution {
public:
    int maximumProduct(vector<int>& nums) {
     
         sort(nums.begin(),nums.end());
         int mul=nums[nums.size()-1]* nums[nums.size()-2] * nums[nums.size()-3];
         int mul1= nums[nums.size()-1]* nums[0] * nums[1];
    
    int maxi= max(mul1,mul);
         return maxi;
    }
};