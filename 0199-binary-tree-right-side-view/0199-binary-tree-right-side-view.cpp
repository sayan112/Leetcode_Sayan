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
        void rightview(TreeNode *root , vector<int> &need, int lv)
        {
            if (!root)
            {
                return;
            }
            if (lv == need.size())
            {
                need.push_back(root->val);
            }

            rightview(root->right, need, lv + 1);
            rightview(root->left, need, lv + 1);
        }

    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> need;
        int lv = 0;
        rightview(root, need, lv);
        return need;
    }
};