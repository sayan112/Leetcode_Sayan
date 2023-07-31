class Solution
{
    public:
        int smallestRangeII(vector<int> &nums, int k)
        {

            sort(nums.begin(), nums.end());
            int high = nums.back()-k;
            int low = nums[0]+k;
            int ans =  nums.back() - nums[0];
            for (int i=0;i<nums.size()-1;i++)
            {
               int maxi  = max(high, nums[i] + k);
                int mini = min(low, nums[i+1] - k);

                ans = min(ans, (maxi - mini));
            }
            return ans;
        }
};