class Solution
{
    public:
        void generateallpermutation(vector<int> &nums, int idx, vector<vector< int >> &ans, vector< bool > &check, vector< int > &ds)
        {
            if (ds.size() == nums.size())
            {
                ans.push_back(ds);
                return;
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (check[i])
                {
                     check[i]=false;
                    ds.push_back(nums[i]);
               
                    generateallpermutation(nums, idx + 1, ans, check, ds);
                    ds.pop_back();
                    check[i] = true;
                }
            }
        }
    vector<vector < int>> permute(vector<int> &nums)
    {
        int idx = 0;
        vector<vector < int>> ans;
        vector<bool>check(nums.size(), true);
        vector<int> ds;
        generateallpermutation(nums, idx, ans, check, ds);
        return ans;
    }
};