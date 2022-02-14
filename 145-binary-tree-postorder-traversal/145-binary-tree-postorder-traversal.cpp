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
//      left right root 
     void dfspost(TreeNode* Node, vector<int>&post )
     {
         if(Node==NULL)
         {
              return;
         }
         else{
            dfspost(Node->left,post );
             dfspost(Node->right ,post );
              post.push_back(Node->val);
             
         }
     }
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>post;
         dfspost( root,post);
        
         return post; 
        
        
        
    }
};