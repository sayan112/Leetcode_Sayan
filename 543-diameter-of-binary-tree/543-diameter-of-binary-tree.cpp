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
     int maxi=0;
    int    countdiameter(TreeNode* node)
    {
         if(!node)
         {
              return 0 ;
         }
      int leftheight=   countdiameter(node->left);
       int rightheight=   countdiameter(node->right);
        maxi=max( maxi , (leftheight+rightheight) );
        
        return 1+max(leftheight, rightheight);
         
    }
     
    int diameterOfBinaryTree(TreeNode* root) {
        
         if(!root)
         {
              return 0;
         }
        
        
      countdiameter(root);
         return maxi;
        
    }
};