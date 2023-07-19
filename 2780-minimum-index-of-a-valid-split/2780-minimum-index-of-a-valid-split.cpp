class Solution
{
    public:
        int minimumIndex(vector<int> &nums)
        {

            unordered_map<int, int> mp;
            int n = nums.size();

            for (auto elem: nums)
            {
                mp[elem]++;
            }

            int mostlyOccured = -1;

            for (auto &x: mp)
            {
                if (x.second * 2 > n)
                {
                    mostlyOccured = x.first;
                    break;
                }
            }
            int splitIdx = -1;

            int count = 0;

            for (int i = 0; i < nums.size() - 1; i++)
            {

                if (mostlyOccured == nums[i])
                {
                    count++;

                    int count2 = mp[mostlyOccured] - count;
                    if ((count * 2 > i + 1) && (count2 * 2 > (n - i - 1)))
                    {
                        splitIdx = i;
                        break;
                    }
                }
            }
            return splitIdx;
        }
};