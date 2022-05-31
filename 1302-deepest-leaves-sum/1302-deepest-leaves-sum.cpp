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
    int sum =0;
    int maxdepth=0;
    
//      int  maxidpth(TreeNode *node)
//      {
//          if(!node)
//          {
//               return 0;
//          }
//           int left=1+maxidpth(node->left);
//            int right=1+maxidpth(node->right);
//           return max(left,right);
//      }
    
    void findmaxdpthleaves(TreeNode *node,int cur)
    {
          if(node)
         {
             if(cur>maxdepth)
     {
         sum=0;
         maxdepth=cur;
     }
         if(cur==maxdepth)
         {
             sum+=node->val;
         }
        findmaxdpthleaves(node->left,cur+1);
         findmaxdpthleaves(node->right,cur+1);
         
         }
       
    
    }
    
    int deepestLeavesSum(TreeNode* root) {
        // int maxdepth= maxidpth(root);
     findmaxdpthleaves(root,1);
    
        return sum;
    }
};