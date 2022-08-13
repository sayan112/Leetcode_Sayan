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
     vector<vector<int>>ans;
     void allpaths(TreeNode* root, vector<int>need)
     {
          if(root==NULL)
          {
              return ; 
          }
          need.push_back(root->val);
         if(root->right==NULL && root->left==NULL)
         {
             ans.push_back(need);
         }
          
          allpaths(root->left,need);
          allpaths(root->right,need);
         
     }
    vector<string> binaryTreePaths(TreeNode* root) {
          vector<string>op;
        vector<int>need;
        
    allpaths(root , need);
         for(auto elem : ans )
         {
              string ans1;
             for( int i =0;i<elem.size();i++)
             {
                   ans1+=to_string(elem[i]);
                  if(i!=elem.size()-1)
                  {
                      
                 ans1+='-';
                    ans1+='>';
                  }
               
             }
             op.push_back(ans1);
             cout <<endl;
         }
         return op; 
        
        
    }
};