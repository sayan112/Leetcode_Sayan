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
    
     bool targetSumAchivedOrNot(TreeNode* root, int targetSum)
     {
         if(!root)
         {
return false;
         }
          if(root->left==NULL && root->right==NULL)
          {
               if((targetSum-root->val)==0)
               {
                    return true;
               }
          }
         
         
         targetSum-=root->val;
   bool check1=  targetSumAchivedOrNot(root->left , targetSum) ;
         bool check2= targetSumAchivedOrNot(root->right , targetSum);
          return check1|| check2;
         
     }
    bool hasPathSum(TreeNode* root, int targetSum) {
         if(!root)
         {
             return false;
         }
       return  targetSumAchivedOrNot(root,targetSum);
    }
};