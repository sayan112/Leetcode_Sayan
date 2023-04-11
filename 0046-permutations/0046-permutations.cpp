class Solution
{
    public:
        void generateallpermutation(vector<int> &nums, int idx, vector<vector< int >> &ans, vector< bool > &ds, vector< int > &ansvec)
        {
            if (ansvec.size() == nums.size())
            {
                ans.push_back(ansvec);
                return;
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (ds[i])
                {
                     ds[i]=false;
                    ansvec.push_back(nums[i]);
               
                    generateallpermutation(nums, idx + 1, ans, ds, ansvec);
                    ansvec.pop_back();
                    ds[i] = true;
                }
            }
        }
    vector<vector < int>> permute(vector<int> &nums)
    {
        int idx = 0;
        vector<vector < int>> ans;
        vector<bool> ds(nums.size(), true);
        vector<int> ansvec;
        generateallpermutation(nums, idx, ans, ds, ansvec);
        return ans;
    }
};