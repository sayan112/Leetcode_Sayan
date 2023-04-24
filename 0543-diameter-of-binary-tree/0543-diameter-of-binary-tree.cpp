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
     int checkheight (TreeNode* root)
     {
          if(!root)
          {
               return 0;
          }
         int lh=checkheight(root->left);
       int rh= checkheight(root->right);
          return 1+max(lh,rh);
     }
    
    void checkdiameter (TreeNode* root , int &maxi )
    {
           if(!root)
          {
               return ;
          }
        int leftheight=checkheight(root->left);
          int Rightheight=checkheight(root->right);
         maxi=max(maxi, (leftheight+Rightheight));
        checkdiameter(root->left,maxi);
        checkdiameter(root->right,maxi);
    }
    int diameterOfBinaryTree(TreeNode* root) {
         int maxi=0;
      checkdiameter(root,maxi);   
         return maxi;
    }
};