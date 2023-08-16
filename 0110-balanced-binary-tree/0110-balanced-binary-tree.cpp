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
     int checkisbalace ( TreeNode * root , bool &isbaalace )
     {
          if(!root)
          {
               return 0;
          }
         
         int leftheight=  checkisbalace(root->left , isbaalace);
           int rightheight=  checkisbalace(root->right , isbaalace);
          if(abs(leftheight-rightheight)>1)
          {
              isbaalace=false;
          }
         return 1+max(leftheight ,rightheight);
         
         
     }
    bool isBalanced(TreeNode* root) {
         bool isbaalace=true;
         checkisbalace(root , isbaalace);
        return  isbaalace;
    }
};