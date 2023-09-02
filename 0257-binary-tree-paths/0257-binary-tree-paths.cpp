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
        void binaryTreeAllPaths(TreeNode *root, vector<string> &ans,  vector<int>subans)
        {
            if (!root)
            {
                return;
            }
            subans.push_back(root->val);
            if (!root->left && !root->right)
            {
                string str;
                for(auto elem : subans)
                {
                    str+=to_string(elem);
                    str+='-';
                    str+='>';
                }
                str.pop_back();
                  str.pop_back();
                ans.push_back(str);
                
            }

            binaryTreeAllPaths(root->left, ans, subans);
            binaryTreeAllPaths(root->right, ans, subans);
        }
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> ans;
         vector<int>subans;
        binaryTreeAllPaths(root, ans, subans);
        return ans ;
    }
};