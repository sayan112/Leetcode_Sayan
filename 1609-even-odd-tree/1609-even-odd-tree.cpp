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
    bool checkforincreaseordecrease ( vector<int>&vec , int count )
    {
         if(count%2==0)
         {
              if(vec[0]%2==0)
                 {
                     return false;
                 }
             
             for(int i=1;i<vec.size();i++)
             {
                 if(vec[i]%2==0)
                 {
                     return false;
                 }
              if(vec[i-1]>=vec[i])
              {
                   return false;
              }
             }
              
         }
        else {
            
            if(vec[0]%2!=0)
            {
                return false;
            }
              for(int i=1;i<vec.size();i++)
             {
                    if(vec[i]%2!=0)
                 {
                     return false;
                 }
              if(vec[i-1]<=vec[i])
              {
                   return false;
              }
             }
        }
         return true;
    }
    bool isEvenOddTree(TreeNode* root) {
         queue<TreeNode*>q;
         q.push(root);
         vector<vector<int>>ans;
         while(q.size())
         {
              int size = q.size();
              vector<int>vec;
             for(int i =0;i<size;i++)
             {
                 TreeNode* node=q.front();
                  vec.push_back(node->val);
                 q.pop();
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
         int count =0;
         for(auto elem : ans)
         {
             
        if(!checkforincreaseordecrease(elem,count))
        {
             return false;
        }
             count++;
             
         }
         return true;
    }
};