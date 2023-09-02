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
     bool checkIsSame(TreeNode* p, TreeNode* q)
     {
          if(!p&&!q)
          {
               return true;
          }
         else if((p&&!q)||(!p&&q))
         {
              return false;
         }
         
         if(p->val!=q->val)
         {
             return false;
         }
         
        return   checkIsSame(p->left , q->left) && checkIsSame(p->right , q->right);
         
         
     }
    bool isSameTree(TreeNode* p, TreeNode* q) {
     
       return  checkIsSame(p,q);
    }
};