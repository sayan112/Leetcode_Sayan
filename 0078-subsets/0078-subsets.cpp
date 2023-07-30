class Solution
{
    public:
        void generateallsubsequence(vector<int> &nums, vector<vector< int >> &ans, vector< int >&subset, int idx, int size)
        {
            if (idx == size)
            {
                ans.push_back(subset);
                return;
            }
            subset.push_back(nums[idx]);
            generateallsubsequence(nums, ans, subset, idx + 1, size);
            subset.pop_back();
            generateallsubsequence(nums, ans, subset, idx + 1, size);
        }
    vector<vector < int>> subsets(vector<int> &nums)
    {
        vector<vector < int>> ans;
        vector<int> subset;
        int idx = 0;
        int n = nums.size();
        generateallsubsequence(nums, ans, subset, idx, n);
        return ans ;
    }
};