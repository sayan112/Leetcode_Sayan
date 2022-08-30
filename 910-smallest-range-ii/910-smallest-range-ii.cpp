class Solution
{
    public:
        int smallestRangeII(vector<int> &nums, int k)
        {
            if (nums.size() == 1)
            {
                return 0;
            }

            sort(nums.begin(), nums.end());
            int high = nums[nums.size() - 1] - k;
            int low = nums[0] + k;
            int ans =nums.back()-nums[0];
            for (int i = 0; i < nums.size() - 1; i++)
            {
                int mn = min(low, nums[i+1] - k);
                int maxi = max(high, nums[i]+k);
                ans = min(ans, maxi - mn);
            }
            return ans;
        }
};