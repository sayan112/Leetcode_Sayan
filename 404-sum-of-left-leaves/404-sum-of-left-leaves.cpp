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
    
  int   sumof(TreeNode* root, bool check,int sum)
     {
          if( root==NULL)
          {
              return 0;
          }
          if((root->left==NULL && root->right==NULL) && check )
          {
              return root->val;
              
          }
          int rightcall =  sumof(root->right,false,sum );
               int leftcall=sumof(root->left,true,sum);
         return rightcall+leftcall;
         
     }
    int sumOfLeftLeaves(TreeNode* root) {
     return  sumof(root,false,0);   
    }
};