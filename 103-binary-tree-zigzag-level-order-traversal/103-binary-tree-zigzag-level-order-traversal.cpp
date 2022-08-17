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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
       
        q.push(root);
         vector<vector<int>>vec;
          if(!root)
         {
          return vec;   
         }
         int check =0;
         while(!q.empty())
         {
              vector<int>need;
             
             int size=q.size();
              while(size--)
              {
                   
                 TreeNode*node=q.front();
                  q.pop();
                   if(node->left)
                   {
                       q.push(node->left);
                   }
                      if(node->right)
                   {
                       q.push(node->right);
                   }
                  need.push_back(node->val);
                  
              }
              if(check==0)
              {
                     vec.push_back(need);
                  check=1;
              }
             else{
                 reverse(need.begin(),need.end());
                 vec.push_back(need);
                 check=0;
             }
          
             
         }
        return vec;
    }
};