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
      int maxidiff =0;
      void findmaxi (TreeNode* root , int child , int &maxidiff)
      {
          if(!root)
          {
               return ;
          }
            maxidiff=max(maxidiff,abs((root->val)-child));
          findmaxi(root->left,child,maxidiff);
          findmaxi(root->right,child,maxidiff);
      }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
        {
             return 0;
        }
       
         findmaxi(root,root->val,maxidiff);
         maxAncestorDiff(root->left);
         maxAncestorDiff(root->right);
         return maxidiff;
    }
};