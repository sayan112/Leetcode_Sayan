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
     bool issym (TreeNode* right , TreeNode* left )
     {
          if(right==NULL || left==NULL)
          {
               return (right==left);
          }
         if(right->val!=left->val)
         {
              return false;
         }
        return  issym( left->left , right->right) && issym(right->left,left->right);
         
     }
    bool isSymmetric(TreeNode* root) {
         return issym(root->right,root->left ); 
    }
};