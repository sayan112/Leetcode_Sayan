class Solution
{
    public:
        int majorityElement(vector<int> &nums)
        {
            int ans = nums[0];
            int count = 1;
            for (int i = 1; i < nums.size(); i++)
            {
                // moor voting algo
                if (count == 0)
                {
                    ans = nums[i];
                }
                if (nums[i] == ans)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
            return ans;
        }
};