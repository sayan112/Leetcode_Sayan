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
        void preorder(TreeNode *root, vector<int> &vec)
        {
            if (root == NULL)
            {
                return;
            }
            vec.push_back(root->val);
            preorder(root->left, vec);

            preorder(root->right, vec);
        }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};