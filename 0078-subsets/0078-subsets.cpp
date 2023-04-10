class Solution
{
    public:
        void generateallsubsets(vector<int> &nums, int idx, vector<vector< int >> &ans, vector< int > &ds)
        {
            if (nums.size() <= idx)
            {
                ans.push_back(ds);
                return;
            }
            ds.push_back(nums[idx]);
            generateallsubsets(nums, idx + 1, ans, ds);
            ds.pop_back();
            generateallsubsets(nums, idx + 1, ans, ds);
        }
    vector<vector < int>> subsets(vector<int> &nums)
    {
        int idx = 0;
        vector<vector < int>> ans;
        vector<int> ds;
        generateallsubsets(nums, idx, ans, ds);
         return ans;
    }
};