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
    int minDepth(TreeNode* root) {
      queue< TreeNode*>q;
        if(root==NULL)
        {
             return 0;
        }
         q.push(root);
         int itration=1;
         while(!q.empty())
         {
              int size=q.size();
              for(int i=0;i<size;i++)
              {
                  TreeNode*node=q.front();
                  q.pop();
                   if(node->left==NULL && node->right==NULL)
                   {
                        return itration;
                   }
                   if(node->left)
                   {
                       q.push(node->left);
                   }
                    if(node->right)
                   {
                       q.push(node->right);
                   }
              }
             itration++;
         }
        return itration;
    }
};