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
    
    
    
    bool  checkitsasametree ( TreeNode* p, TreeNode* q)
    {
         if(p==NULL || q==NULL)
         {
              return (p==q);
         }
         if(p->val!=q->val)
         {
              return false;
         }
         return checkitsasametree(p->left,q->left) &&  checkitsasametree(p->right,q->right);
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return  checkitsasametree(p,q);
    }
};