class Solution
{
    public:

        void generateallPermutations(vector<int> nums, int idx, vector<vector< int>> &ds)
        {

            if (idx == nums.size())
            {
                ds.push_back(nums);
                return;
            }
            for (int i = idx; i < nums.size(); i++)
            {
                if (i != idx && nums[i] == nums[idx])
                {
                    continue;
                }
                swap(nums[idx], nums[i]);
                generateallPermutations(nums, idx + 1, ds);
          
            }
        }
    vector<vector < int>> permuteUnique(vector<int> &nums)
    {
        int idx = 0;
        vector<vector<int>> ds;
        sort(nums.begin(),nums.end());
        generateallPermutations(nums, idx, ds);
        return ds;
    }
};