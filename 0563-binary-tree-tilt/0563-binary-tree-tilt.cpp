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
        int result = 0;
    int findTiltAbsoluteLeftAndRight(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
         
        int left = findTiltAbsoluteLeftAndRight(root->left);
        int right = findTiltAbsoluteLeftAndRight(root->right);
        result += abs(left - right);
        return left + right + root->val;
    }
    int findTilt(TreeNode *root)
    {
        findTiltAbsoluteLeftAndRight(root);
         return result;
    }
};