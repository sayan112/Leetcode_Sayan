class Solution
{
    public:

        vector<int> twoSum(vector<int> &nums, int target)
        {

           	// brute force ok :)
             vector<int>need1;

            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    int need = target - nums[i];
                    if (need == nums[j])
                    {
                        need1.push_back(i);
                        need1.push_back(j);
                    }
                }
            }
            return need1;
        }
};