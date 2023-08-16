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
        int maxiPathSum(TreeNode *node, int &maxi)
        {
            if (!node)
            {
                return 0;
            }
            int leftsum = max(0,maxiPathSum(node->left, maxi));
            int rightsum = max(0,maxiPathSum(node->right, maxi));
            maxi = max(maxi, (node->val + leftsum + rightsum));
            cout << (node->val + leftsum + rightsum)<<endl;
            return (node->val + max(leftsum, rightsum));
        }
    int maxPathSum(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int maxi = INT_MIN;
        maxiPathSum(root, maxi);
        return maxi ;
    }
};