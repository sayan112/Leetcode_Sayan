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
        void findNodes(TreeNode *root,int x, int y , int lv[2],int parent[2], int currentlev, TreeNode * cuurrentparent)
    {
        if(root==NULL)
        {
             return ;
        }
         if(root->val==x)
         {
             lv[0]=currentlev;
             parent[0]=cuurrentparent->val;
         }
          if(root->val==y)
         {
             lv[1]=currentlev;
             parent[1]=cuurrentparent->val;
              
         }
         findNodes(root->left, x, y , lv, parent ,currentlev+1, root );
                 findNodes(root->right , x, y , lv, parent ,currentlev+1, root );

    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        
        int lv[2]={-1,-1};
        int parent[2]={-1,-1};
        findNodes(root,x,y,lv,parent,0, new TreeNode(-1));
        if(lv[0]==lv[1] && parent[0]!=parent[1])
        {
             return true;
        }
    return false;
        
        
        
    }

    

    
    
};