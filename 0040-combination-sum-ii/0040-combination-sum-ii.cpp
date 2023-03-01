class Solution
{
    public:
        void uniquecombination(int idx, vector<int> &candidates, int target, vector<int> &ds, vector< vector< int>> &ans)
        {
            if (target == 0)
            {
                ans.push_back(ds);
                return;
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
                uniquecombination(i + 1, candidates, target - candidates[i], ds, ans);
                ds.pop_back();
            }
        }
    vector<vector < int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        int idx = 0;
        vector<vector < int>> ans;
        vector<int> ds;
        uniquecombination(idx, candidates, target, ds, ans);
        return ans;
    }
};