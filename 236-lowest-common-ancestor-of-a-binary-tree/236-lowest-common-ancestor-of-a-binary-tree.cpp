/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {


    public:
        bool  findpath (TreeNode* root, TreeNode* need, vector<TreeNode*>&vec)
    {
        
         if(!root)
         {
              return false;
         }
        
        vec.push_back(root);
         if(root==need)
         {
               return true;
         }
         
        bool left = findpath(root->left , need , vec);
        bool right =  findpath(root->right,need,vec);
             if(left|| right)
             {
                  return true;
             }
            vec.pop_back();
         return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         vector<TreeNode*>vec1;
     
           vector<TreeNode*>vec2;
        findpath(root, p ,vec1);
        findpath(root, q , vec2 );
       
         TreeNode *lastCommon=NULL;
     
        for(int i =0; i <  min (vec1.size(),vec2.size());i++)
        {
            if(vec1[i]==vec2[i])
            {
                lastCommon=vec1[i];
            } 
          
        }
        
        
      
         return lastCommon ;
        
    }
};






// // Nikhil Nagrale
// // 10 months ago
// // // Code For Naive Solution 
// class Solution {
//     bool getPath(TreeNode* root, TreeNode* x, vector<TreeNode*> &path) {
//         if (root == NULL) return false;
//         path.push_back(root);
//         if(root == x) return true;
//         if (getPath(root->left, x, path) || getPath(root->right, x, path))
//             return true;
//         path.pop_back();
//         return false;
//     }

//     vector<TreeNode > getPathtoNode(TreeNode A, TreeNode* B) {
//         vector<TreeNode *> path;
//         if (A == NULL) return path;
//         getPath(A, B, path);
//         return path;
//     }
    
//     TreeNode* findLastCommon(vector<TreeNode*> a,vector<TreeNode*> b){
//         TreeNode *lastCommon=NULL;
//         for(int i=0;i<min(a.size(),b.size());i++){
//             if(a[i]==b[i]) lastCommon=a[i];
//         }
//         return lastCommon;
//     }
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         vector<TreeNode*> pathToP = getPathtoNode(root,p);
//         vector<TreeNode*> pathToQ = getPathtoNode(root,q);
//         TreeNode *LCA = findLastCommon(pathToP,pathToQ);
//         return LCA;
//     }
// };