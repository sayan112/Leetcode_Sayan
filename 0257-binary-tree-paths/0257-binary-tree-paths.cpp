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
     void binaryTreePath (TreeNode* root , vector<string>&ans ,       string path )
     {
          if(!root)
          {
              return ; 
               
          }
         if(root->left ==NULL && root->right==NULL)
         {
              path+=to_string(root->val);
          
            ans.push_back(path);
             
         }
          path+=to_string(root->val);
           path+="->";
         binaryTreePath(root->left , ans , path );
       
         binaryTreePath(root->right , ans , path );
         
         
     }
    vector<string> binaryTreePaths(TreeNode* root) {
         vector<string>ans;
      string path ;
         binaryTreePath(root,ans,path);
         return ans;
    }
};