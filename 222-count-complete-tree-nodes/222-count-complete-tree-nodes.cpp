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
     void countallnode(TreeNode* root , int &count )
     {
          if(!root)
          {
              return ; 
          }
              
         count++;
         countallnode(root->left, count);
         countallnode(root->right,count);
         
         
     }
    int countNodes(TreeNode* root) {
        
        if(!root)
        {
             return 0;
        }
        else{
            int count =0;
            countallnode(root,count);
            return count ;
        }
    }
};