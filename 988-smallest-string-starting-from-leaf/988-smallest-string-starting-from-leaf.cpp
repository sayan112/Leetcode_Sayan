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
     string ans;
     void preorder(TreeNode* root,string need)
     {
         if(!root)
         {
              return ;
         }
         need+=char(97+root->val);
          if(root->left==NULL && root->right==NULL)
          {
              reverse(need.begin(),need.end());
              if(ans=="")
              {
                  ans=need;
              }else{
                  ans=min(ans,need);
              }
          }
         preorder(root->left,need);
         preorder(root->right,need);
         
         
     }
    string smallestFromLeaf(TreeNode* root) {
         if(!root)
         {
              return " ";
         }
         string need;
        preorder(root,need);
         return ans ; 
    }
};