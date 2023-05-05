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

        void findmaxi(TreeNode *root, int child, int &maxidiff)
        {
            if (!root)
            {
                return;
            }
            maxidiff = max(maxidiff, abs((root->val) - child));
            findmaxi(root->left, child, maxidiff);
            findmaxi(root->right, child, maxidiff);
        }
    void findmaxAncestorDiff(TreeNode *root, int &maxidiff)
    {
        if (!root)
        {
            return;
        }
        findmaxi(root, root->val, maxidiff);
        findmaxAncestorDiff(root->left,maxidiff);
        findmaxAncestorDiff(root->right,maxidiff);
    }
    int maxAncestorDiff(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        int maxidiff = 0;
        findmaxAncestorDiff(root, maxidiff);

        return maxidiff;
    }
};