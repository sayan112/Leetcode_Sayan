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
private: 
     void inorderreal(  vector<int>&dfs,TreeNode*Node)
     {
         if(Node==NULL)
         {
              return ; 
         }
         else{
            inorderreal(dfs,Node->left);
             dfs.push_back(Node->val);
                 inorderreal(dfs,Node->right);
         }
     }
    public:
    vector<int> inorderTraversal(TreeNode* root) {
         // key point of inorder traversal -> (left root right )
        vector<int>dfs;
        inorderreal(dfs,root);
         return dfs;
    }
};