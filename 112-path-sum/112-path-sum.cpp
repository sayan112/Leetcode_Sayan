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
     bool pathsum(TreeNode* root, int targetSum,int sum)
     {
         if(root==NULL)
         {
              return false;
         }
         //  if(((sum+root->val)==targetSum) && (root->left==NULL && root->right==NULL))
         //  {
         //      return true;
         //  }
         // else{
         //     return false;
         // }
          if((root->left==NULL && root->right==NULL))
          {
               sum+=root->val;
               if(sum==targetSum)
               {
                    return true;
               }
              else{
                   return false;
              }
              
          }
         
          bool leftcall = pathsum( root->left, targetSum, sum+root->val);
         bool rightcall = pathsum( root->right, targetSum,sum+root->val);
          if(leftcall||rightcall)
          {
              return true;
              
          }else{
              
              return false;
          }
         
     }
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
       return  pathsum(root, targetSum,0); 
        
    }
};