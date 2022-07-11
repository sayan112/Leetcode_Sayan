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
        void rightneed(TreeNode *node, int need, vector<int> &ans)
        {
            if (node == NULL)
            {
                return;
            }
            if (ans.size() == need)
            {
                ans.push_back(node->val);
            }
            rightneed(node->right, need + 1, ans);
            rightneed(node->left, need + 1, ans);
        }
    vector<int> rightSideView(TreeNode *root)
    {

        vector<int> res;
        rightneed(root, 0, res);
        return res;
    }
};