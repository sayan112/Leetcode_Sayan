class Solution
{
    public:
        void generateCombinationsum2(vector<int> &candidates, int idx, vector<int> &ds, vector< vector< int>> &ans, int target)
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            for (int i = idx; i < candidates.size(); i++)
            {
                if (i > idx && candidates[i] == candidates[i - 1])
                {
                    continue;
                }
                if (candidates[i] > target)
                {
                    break;
                }
                ds.push_back(candidates[i]);
                generateCombinationsum2(candidates, i + 1, ds, ans, target - candidates[i]);
                ds.pop_back();
            }
        }
    vector<vector < int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector < int>> ans;
        vector<int> ds;
        int idx = 0;
        generateCombinationsum2(candidates, idx, ds, ans, target);
         return ans;
    }
};