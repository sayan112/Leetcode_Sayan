/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:

        bool isEvenOddTree(TreeNode *root)
        {
            vector<vector < int>> ans;

            queue<TreeNode*> q;
            q.push(root);

            while (!q.empty())
            {
                vector<int> vec;
                int size = q.size();
                for (int i = 0; i < size; i++)
                {
                    TreeNode *node = q.front();
                    q.pop();
                    vec.push_back(node->val);
                    if (node->left)
                    {
                        q.push(node->left);
                    }
                    if (node->right)
                    {
                        q.push(node->right);
                    }
                }
                ans.push_back(vec);
            }

            int check = 0;

            for (auto elem1: ans)
            {

                if (check == 0)
                {
                    check = 1;
                    for (auto elem: elem1)
                    {
                        if (elem % 2 == 0)
                        {
                            return false;
                        }
                    }
                    for (int i = 1; i < elem1.size(); i++)
                    {
                        if (elem1[i] <= elem1[i - 1])
                        {
                            return false;
                        }
                    }
                }
                else
                {

                    check = 0;
                    for (auto elem: elem1)
                    {
                        if (elem % 2 != 0)
                        {
                            return false;
                        }
                    }
                    for (int i = 1; i < elem1.size(); i++)
                    {
                        if (elem1[i] >= elem1[i - 1])
                        {

                            return false;
                        }
                    }
                }
            }
            return true;
        }
};