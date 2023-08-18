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
     void rightSide(TreeNode*root , vector<int>&rightview,int level)
     {
          if(!root)
          {
              return ;
          }
          if(rightview.size()==level)
          {
              rightview.push_back(root->val);
          }
    
          rightSide(root->right,rightview,level+1);
              
         rightSide(root->left,rightview,level+1);
         
     }
    vector<int> rightSideView(TreeNode* root) {
     int level=0;
         vector<int>rightview;
         rightSide(root,rightview,level);
         return rightview;
    }
};