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
     
     void inorder(TreeNode*root ,  vector<int>&sortednodes)
     {
        
         if(!root)
         {
              return ;
         }
         inorder(root->left,sortednodes);
          sortednodes.push_back(root->val);
         inorder(root->right,sortednodes);
         
     }
    bool findTarget(TreeNode* root, int k) {
     vector<int>sortednodes;
        inorder(root,sortednodes);
         for(auto elem : sortednodes)
         {
             cout << elem <<" ";
         }
        
         int start=0;
         int end =sortednodes.size()-1;
        while(end>start)
        {
            int sum=sortednodes[start]+sortednodes[end];
             if(sum==k)
             {
                  return true;
             }
            if(sum>k)
            {
                end--;
            }
            else{
                 start++;
            }
        }
        return false;
    
    }
};