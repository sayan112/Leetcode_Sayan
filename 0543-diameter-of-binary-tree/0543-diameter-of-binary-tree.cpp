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
// longest distance between two nodes 
class Solution {
public:
        int diameterOfTree(TreeNode* root , int &diameter) {
        if(!root)
        {
             return 0;
        }
        int leftheight=diameterOfTree(root->left,diameter);
           int rightheight=diameterOfTree(root->right,diameter);
             diameter=max(diameter ,(leftheight+rightheight) );
         
         return 1+max(leftheight, rightheight);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
         int diameter=0;
     diameterOfTree(root,diameter);
         return diameter;
    }
};