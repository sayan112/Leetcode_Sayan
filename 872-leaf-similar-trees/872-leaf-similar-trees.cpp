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
     vector<int>vec1;
     vector<int>vec2;
    void  solve1(TreeNode* root1)
    {
         if(root1==NULL)
         {
              return ;
         }
        
           if( root1->left==NULL && root1->right==NULL)

         {
              vec1.push_back(root1->val);
         }
 
        
        solve1 (root1->left);
         solve1(root1->right);
        
        
        
    }
        void  solve2(TreeNode* root2)
    {
         if(root2==NULL)
         {
              return ;
         }
        
           if( root2->left==NULL && root2->right==NULL)

         {
              vec2.push_back(root2->val);
         }
 
        
        solve2 (root2->left);
         solve2(root2->right);
        
        
        
    }
     
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        
        
         solve1(root1);
            solve2(root2);
      
         for(auto elem : vec1)
         {
             cout << elem <<" ";
         }
        cout << endl;
             for(auto elem : vec2)
         {
             cout << elem <<" ";
         }
         if(vec1==vec2)
         {
              return true;
         }
        else{
             return false;
        }
        
        return false;
    }
};