/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
    
    // approach count height 
    // if left height and right height is equal then count height and from there we can count nodes 
    // else 1+ (count-leftsub-tree)+(count-rightsub-tree)
     int heightleft(TreeNode *root)
     {
          int count =0;
         while(root)
         {
             root=root->left;
             count++;
         }
          return count ; 
         
     }
     int heightright(TreeNode *root)
     {
          int count =0;
         while(root)
         {
             root=root->right;
             count++;
         }
          return count ; 
         
     }
        int  countallnode(TreeNode *root)
        {
             if(!root)
             {
                  return 0;
             }
             int leftheight= heightleft(root) ;
            int rightheight = heightright(root);
             if( leftheight==rightheight )
             {
                 return(1<<leftheight)-1;
             }
            else {
                 return 1+ (countallnode(root->left))+(countallnode(root->right));
                }
            
        }
    int countNodes(TreeNode *root)
    {

        if (!root)
        {
            return 0;
        }
        else
        {
        
     return countallnode(root);
    
        }
    }
};