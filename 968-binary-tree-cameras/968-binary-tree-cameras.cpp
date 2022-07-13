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
     int  dfs(TreeNode* root , int &sum )
     {
          if(root==NULL)
          {
               return 1 ; 
          }
        int left =  dfs(root->left , sum);
         int right =   dfs(root->right , sum);
        //  
        //  3 types it has :) 
            //   1st type ~ have camera 
            //  2nd type ~  being already  monitored
          //     3rd typr ~ dont have any camera not monitored 
         
          if (left ==0 || right ==0)
              // if at least 1 child is not monitored, we need to place a camera at current node 
          {
              sum++;
               return 2 ;
          }
          else if(left ==2 || right ==2)
              // if at least 1 child has camera, the current node is monitored. Thus, we don't need to place a camera here 
          {
              return 1 ; //monitored
          }
         else{
             return 0;  //not monitored 
         }
         
         return -1;
         
         
          
     }
    int minCameraCover(TreeNode* root) {
        
         if(root==NULL)
         {
              return 0;
         }
         int sum =0;
        
         int ans = dfs(root, sum);
         if(ans==0)
         {
         sum++;
             
        }
        return sum ; 
        
    }
};