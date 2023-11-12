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
class Solution  {
public:
      int IsbalancedCheck (TreeNode* root)
    {
         if(!root)
         {
             return 0;
         }
        
        int leftheight= IsbalancedCheck(root->left);
         if(leftheight==-1)
         {
             return -1;
         }
        
       int rightheight=  IsbalancedCheck(root->right);
          if(rightheight==-1)
         {
             return -1;
         }
        
         if(abs(leftheight-rightheight)>1)
         {
             return -1;
         }
         return 1+max(leftheight,rightheight);
    }
     
    bool isBalanced(TreeNode* root) {
         if(IsbalancedCheck(root)==-1)
         {
             return false;
         }
     
         return true;
    }
  
};