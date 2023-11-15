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
     void binaryTreePath (TreeNode* root , string need , vector<string>&ans  )
     {
         if(!root)
         {
             return ;
         }
          if(!root->left && !root->right)
          {
   
          need+=to_string(root->val);
              ans.push_back(need);
               return ;
          }
         
          need+=to_string(root->val);
            need+="->";
         
         
         binaryTreePath(root->left,need,ans);
                  
         binaryTreePath(root->right,need,ans);
      
         
     }
    vector<string> binaryTreePaths(TreeNode* root) {
     
          vector<string>ans;
         string need;
        
        binaryTreePath(root,need,ans);
         for(auto elem : ans )
         {
              cout << elem <<" ";
         }
         return ans ;
    }
};