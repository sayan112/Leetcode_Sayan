/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void countingPathSum(TreeNode *root, int targetSum, vector<int> vec, vector<vector< int>> &ans)
        {
            if (!root)
            {
                return;
            }
            vec.push_back(root->val);
            targetSum-=root->val;
            if (!root->left && !root->right)
            {
                if (targetSum == 0)
                {
                    ans.push_back(vec);
                }
            }
     
            countingPathSum(root->left, targetSum, vec, ans);
            countingPathSum(root->right, targetSum, vec, ans);
        }
    vector<vector < int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector < int>> ans;
        vector<int> vec;
        countingPathSum(root, targetSum, vec, ans);
        return ans;
    }
};