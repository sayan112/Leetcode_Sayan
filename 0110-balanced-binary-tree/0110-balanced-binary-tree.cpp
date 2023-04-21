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
     int balacedornot (TreeNode* root , bool &isbalance)
     {
         if(root==NULL)
         {
              return 0 ;
         }
          int lh=balacedornot(root->left,isbalance);
         int rh=balacedornot(root->right,isbalance);
         if(abs(lh-rh)>1)
         {
              isbalance=false;
         }
          return 1+max(rh,lh);
         
     }
    bool isBalanced(TreeNode* root) {
        bool isbalance=true;
        balacedornot(root,isbalance);
         return isbalance;
    }
};