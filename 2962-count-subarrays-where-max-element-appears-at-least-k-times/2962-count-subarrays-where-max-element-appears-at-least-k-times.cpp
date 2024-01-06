class Solution
{
    public:
        long long countSubarrays(vector<int> &nums, int k)
        {
            int size = nums.size();
            int maxi = *max_element(nums.begin(), nums.end());
            int i = 0;
            int j = 0;
            int count = 0;
            long long  ans = 0;
            while (j < nums.size())
            {

                if (nums[j] == maxi)
                {
                    count++;
                }
                if (count >= k)
                {
                    while (count >= k)
                    {
                        ans += size - j;
                        if (nums[i] == maxi)
                        {
                            count--;
                        }
                        i++;
                    }
                
                }
                    j++;
            }
            return ans;
        }
};