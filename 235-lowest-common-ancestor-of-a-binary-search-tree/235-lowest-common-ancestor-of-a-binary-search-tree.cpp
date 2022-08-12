/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */

class Solution
{
    public:
        bool findfirstpath(TreeNode *root, TreeNode *find, vector<int> &vec1)
        {
            if (!root)
            {
                return false;
            }
            vec1.push_back(root->val);
            if (root == find)
            {
                return true;
            }

            bool left = findfirstpath(root->left, find, vec1);
            bool right = findfirstpath(root->right, find, vec1);
            if (left || right)
            {
                return true;
            }
            else
            {
                vec1.pop_back();
                return false;
            }
        }
    TreeNode* lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        vector<int> vec1;
        findfirstpath(root, p, vec1);
        vector<int> vec2;
        findfirstpath(root, q, vec2);
        for (auto elem: vec1)
        {
            cout << elem << " ";
        }
        cout << endl;
        for (auto elem: vec2)
        {
            cout << elem << " ";
        }

        cout << endl;
        int need = -100;

        for (int i = 0; i < min(vec1.size(), vec2.size()); i++)
        {
            if (vec1[i] == vec2[i])
            {

                need = vec1[i];
            }
        }
        cout << need<<endl;

        TreeNode * node = new TreeNode(need);
        return node;
    }
};