class Solution
{
    public:
        int findMaxConsecutiveOnes(vector<int> &nums)
        {

            int count = 0;
            int ans = 0;
            for (auto elem: nums)
            {
                if (elem == 1)
                {
                    count++;
                    ans = max(ans, count);
                }
                else
                {
                    count = 0;
                }
            }
             return ans ;
        }
};