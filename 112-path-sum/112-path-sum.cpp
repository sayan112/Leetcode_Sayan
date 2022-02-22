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
     bool real= false;
    void   sum(TreeNode* root, int targetSum , int val )
     {
          if (root==NULL)
          {
               return ;
          }
             
           val+= root->val;
          
              if (root->left == NULL && root->right==NULL )
              {
                   int ans = val;
                  cout << ans <<" "<< targetSum << endl;
                   if(ans == targetSum)
                   {
                        real= true;
                        return ;
                       
                   }
                 
                  
              
              }
             
                  
         
         sum(root->left , targetSum  ,  val);
          sum(root->right , targetSum , val);
    
         
             
         
     }
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
         if ( root==NULL)
         {
              return false;
         }
    sum(root , targetSum, 0);
    
        
          return real;
        
    }
};