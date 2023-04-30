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
        int getdepth(TreeNode *root, int value, int &parent, int height)
        {
            if (!root)
            {
                return 0;
            }
            if (root->val == value)
            {
                return height;
            }
            parent = root->val;

            int left = getdepth(root->left, value, parent, height+1);
            if (left != 0)
            {
                return left;
            }

            parent = root->val;

            int right = getdepth(root->right, value, parent, height+1);

            return right;;
        }
    bool isCousins(TreeNode *root, int x, int y)
    {
        if (root->val == x || root->val == y)
        {
            return false;
        }
        int x_parent = -1;
        int y_parent = -1;
        int x_height = getdepth(root, x, x_parent, 0);
        int y_height = getdepth(root, y, y_parent, 0);
         cout << x_height<<" "<< y_height<< endl;
        if (x_height == y_height && x_parent != y_parent)
        {
            return true;
        }
        return false;
    }
};