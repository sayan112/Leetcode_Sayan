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
     bool isSymmetricHelp(TreeNode* nodeleft , TreeNode* noderight)
     {
         if(nodeleft==NULL || noderight==NULL)
         {
             if(nodeleft==noderight)
             {
                  return true;
             }
             else{
                  return false;
             }
         }
         
         if(nodeleft->val!=noderight->val)
         {
       
              return false;
         }
         
        return  (isSymmetricHelp(nodeleft->left,noderight->right)  && isSymmetricHelp(nodeleft->right,noderight->left)); 
         
          
     }
    
    
    bool isSymmetric(TreeNode* root) { 
        if(root==NULL)
        {
             return false;
        }
        else{
           return  isSymmetricHelp(root->left,root->right);
        }
    }
};