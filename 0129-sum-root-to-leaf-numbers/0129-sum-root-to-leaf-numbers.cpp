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
        void sumAllRoot_to_leaf(TreeNode *root, string need, int &ans)
        {
            if (!root)
            {
                return;
            }
if(root->left==NULL && root->right==NULL)
{
     need+=to_string(root->val);
    cout << need;
    ans+=stoi(need);
    return;
}
     need+=to_string(root->val);
            sumAllRoot_to_leaf(root->left, need, ans);
            sumAllRoot_to_leaf(root->right, need, ans);
        }
    int sumNumbers(TreeNode *root)
    {
        string need;
        int ans;
        sumAllRoot_to_leaf(root, need, ans);
        return ans;
    }
};