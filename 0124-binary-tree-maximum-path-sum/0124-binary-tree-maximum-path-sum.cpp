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
        int maxPath(TreeNode *root,int &maxiPathsum)
        {
            if (!root)
            {
                return 0;
            }

            int leftpath = max(0,maxPath(root->left,maxiPathsum));
            int rightpath =max(0, maxPath(root->right,maxiPathsum));
             maxiPathsum=max(maxiPathsum,(root->val+leftpath+rightpath));
            return root->val + max(leftpath, rightpath);
        }
    int maxPathSum(TreeNode *root)
    {
        int maxiPathsum=INT_MIN;

maxPath(root,maxiPathsum);
              return   maxiPathsum;
    }
};