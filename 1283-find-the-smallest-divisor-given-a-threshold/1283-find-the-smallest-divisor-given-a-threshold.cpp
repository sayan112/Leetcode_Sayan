class Solution
{
    public:
        int smallestDivisor(vector<int> &nums, int threshold)
        {

            int start = 1;
            int end = -1;
            for (auto elem: nums)
            {
                if (elem > end)
                {
                    end = elem;
                }
            }

            int ans = 0;

            while (start <= end)
            {

                int mid = (start + end) / 2;

                long long int sum = 0;
                for (auto elem: nums)
                {
                    if (elem % mid == 0)
                    {
                        sum += (elem / mid);
                    }
                    else
                    {
                        sum += (elem / mid) + 1;
                    }
                }
                if (sum <= threshold)
                {
                    ans = mid;
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            return ans;
        }
};