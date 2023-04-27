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
    void findsum(TreeNode* root, int targetSum, vector<int>ds,  vector<vector<int>>&ans)
    {
         if(!root)
         {
              return ;
         }
        
       
        if(root->left==NULL && root->right==NULL)
        {
                   
            if(targetSum-root->val==0)
            {
                      ds.push_back(root->val);
                ans.push_back(ds);
                 return ;
            }
        }
    
              ds.push_back(root->val);
        findsum(root->left,targetSum-root->val, ds , ans);
        findsum(root->right,targetSum-root->val, ds , ans);
         ds.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
           vector<vector<int>>ans;
        vector<int>ds;
        findsum(root,targetSum,ds,ans);
         return ans ;
    }
};