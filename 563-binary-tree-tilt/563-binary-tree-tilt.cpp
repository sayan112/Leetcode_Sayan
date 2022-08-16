/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int countSum = 0;
    int findalltilt(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int left = findalltilt(root->left);
        int right = findalltilt(root->right);

        countSum += abs(left - right);
        return left + right + root->val;
    }
    int findTilt(TreeNode *root)
    {

        findalltilt(root);
         return countSum ;
    }
};