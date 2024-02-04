class Solution
{
    public:
        void findallcombinations(vector<int> &candidates, vector<vector< int >> &ans, int target, vector< int > vec, int idx)
        {
            if (idx >= candidates.size())
            {
                if (target == 0)
                {
                    ans.push_back(vec);
                }
                return;
            }
            if (target >= candidates[idx])
            {
                vec.push_back(candidates[idx]);
                target -= candidates[idx];
                findallcombinations(candidates, ans, target, vec, idx);
                vec.pop_back();
                target += candidates[idx];
            }

            findallcombinations(candidates, ans, target, vec, idx + 1);
        }
    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<vector < int>> ans;
        int idx = 0;
        vector<int> vec;

        findallcombinations(candidates, ans, target, vec, idx);
        return ans;
    }
};