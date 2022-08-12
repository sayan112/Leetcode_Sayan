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
    vector<double> averageOfLevels(TreeNode* root) {
                    vector<vector<int>>ans ; 

         queue<TreeNode*>q;
         q.push(root);
    
         
         while(!q.empty())
         {
              vector<int>vec;
              int size = q.size();
              for(int i =0; i < size;i++)
              {
                  TreeNode*node = q.front();
                   q.pop();
                   vec.push_back(node->val);
                    if(node->left)
                  {
                      q.push(node->left);
                  }
                  if(node->right)
                  {
                      q.push(node->right);
                  }
                 
              }
              ans.push_back(vec);
         }
        
           vector<double> finalans ; 
         
         for(auto elem : ans)
         {
              double sum =0;
              for(auto elem1:elem)
              {
                  sum+=elem1;
              }
              int size=elem.size();
             finalans.push_back((double)sum/size);
         }
         return finalans;
        
    }
};