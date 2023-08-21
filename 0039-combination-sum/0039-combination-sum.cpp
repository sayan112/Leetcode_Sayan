class Solution
{
    public:
        void generatecombinationSum(vector<int> &candidates, int idx, int target, vector<int> &ds, vector< vector< int>> &ans)
        {
            if (idx == candidates.size())
            {
                if (target == 0)
                {
                    ans.push_back(ds);
                }
                return;
            }
            if (candidates[idx] <= target)
            {
                ds.push_back(candidates[idx]);
                target -= candidates[idx];

                generatecombinationSum(candidates, idx, target, ds, ans);
                target += candidates[idx];
                ds.pop_back();
            }

            generatecombinationSum(candidates, idx + 1, target, ds, ans);
        }
    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector < int>> ans;
        vector<int> ds;
        int idx = 0;
        generatecombinationSum(candidates, idx, target, ds, ans);
        return ans;
    }
};