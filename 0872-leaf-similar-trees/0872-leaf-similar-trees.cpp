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
      void nodeallleafroot1(TreeNode*root1 , vector<int>&ans1)
      {
           if(root1==NULL)
           {
            return;
           }
           if(root1->left==NULL && root1->right==NULL)
           {
                ans1.push_back(root1->val);
           }
          nodeallleafroot1(root1->left,ans1);
           nodeallleafroot1(root1->right,ans1);
          
      }
       void nodeallleafroot2(TreeNode*root2 , vector<int>&ans2)
      {
           if(root2==NULL)
           {
            return;
           }
           if(root2->left==NULL && root2->right==NULL)
           {
                ans2.push_back(root2->val);
           }
          nodeallleafroot2(root2->left,ans2);
           nodeallleafroot2(root2->right,ans2);
          
      }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
     
         vector<int>ans1;
        vector<int>ans2;
    nodeallleafroot1(root1,ans1);
         nodeallleafroot2(root2,ans2);
         int check=0;
         if(ans1.size()>ans2.size())
         {
             check=ans1.size();
             
         }
        else{
            check=ans2.size();
        }
        
      for(int i=0; i <check ;i++)
      {
           cout << ans1[i]<<" "<< ans2[i]<<endl;
          if(ans1[i]!=ans2[i])
          {
               return false;
          }
      }
        
        return true;
        
    }
};