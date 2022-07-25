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
    int countheight(TreeNode* node)
    {
         if(!node)
         {
              return 0 ;
         }
      int left=  countheight(node->left);
       int right=  countheight(node->right);
        return 1+max(left,right);
         
    }
      void countdiameter(TreeNode* node)
    {
         if(!node)
         {
              return  ;
         }
      int left=  countheight(node->left);
       int right=  countheight(node->right);
           maxi=max(maxi , (left+right));
          
         countdiameter(node->left);
          countdiameter(node->right);
         
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