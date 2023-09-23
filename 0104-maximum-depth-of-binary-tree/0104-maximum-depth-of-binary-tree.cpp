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
    int maxDepth(TreeNode* root) {
         int height=0;
        queue<TreeNode*>q;
         if(!root)
         {
              return height;
         }
         q.push(root);
         while(q.size())
         {
             int size=q.size();
              height++;
              for(int i =0;i<size;i++)
              {
                  TreeNode*node =q.front();
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
             
         }
         return height;
    }
};