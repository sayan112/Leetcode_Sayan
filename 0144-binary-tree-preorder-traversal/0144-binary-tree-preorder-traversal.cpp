/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
     void solve(TreeNode* root ,  vector<int>&need  )
     {
          if(root==NULL)
          {
              return ;
          }
          need.push_back(root->val);
         solve(root->left,need);
         
         solve(root->right,need);
         
     }
    vector<int> preorderTraversal(TreeNode* root) {
         vector<int>need;
         solve(root,need);
         return need;
    }
};