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
     bool need (TreeNode* root, int targetSum )
     {
         
       
         if(!root)
         {
              return false;
         }
          
         if(root->left==NULL && root->right==NULL)
         {
              if(targetSum-root->val==0)
              {
                   return true;
              }
         }
         
       return   need(root->left,targetSum-root->val) ||   need(root->right,targetSum-root->val);
       
     }
    bool hasPathSum(TreeNode* root, int targetSum) {
 
     return  need(root,targetSum); 
    }
};