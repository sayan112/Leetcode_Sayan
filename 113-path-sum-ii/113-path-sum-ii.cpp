/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> ans;
    void pathallsum(TreeNode *root, int targetSum, vector<int> vec)
    {
        if (!root)
        {
            return;
        }
        vec.push_back(root->val);
        if (root->left == NULL && root->right == NULL)
        {
            if (targetSum - root->val==0)
            {
                ans.push_back(vec);
            }
        }
        pathallsum(root->left, targetSum - root->val, vec);
        pathallsum(root->right, targetSum - root->val, vec);
    }
    vector<vector < int>> pathSum(TreeNode *root, int targetSum)
    {

        vector<int> vec;
        pathallsum(root, targetSum, vec);
        return ans;
    }
};