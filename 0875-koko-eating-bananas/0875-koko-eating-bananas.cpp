class Solution
{
    public:
        int minEatingSpeed(vector<int> &piles, int h)
        {
            long long int maxi = *max_element(piles.begin(), piles.end());
            long long int sum = 0;

            int start = 1;
            int end = maxi;

            while (end >= start)
            {
                int mid = (end + start) / 2;

                long long int sumcheck = 0;
                for (auto elem: piles)
                {
                    long long int eattime = elem / mid;
                    if (elem % mid != 0)
                    {
                        eattime++;
                    }
                    sumcheck += eattime;
                }

                if (sumcheck <= h)
                {
                      end=mid-1;
                }
                else if (sumcheck > h) {
                     start=mid+1;
                }

            }
            return start;
        }
};