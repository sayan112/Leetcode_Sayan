/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *};
 */
class Solution
{
    public:
        bool findpath(TreeNode *root, TreeNode *node, vector<TreeNode*> &path)
        {
            if (!root)
            {
                return false;
            }
                     path.push_back(root);
            if (root->val == node->val)
            {
                return true;
            }
    
            if (findpath(root->left, node, path) || findpath(root->right, node, path))
            {
                return true;
            }
             path.pop_back();
             return false;
             
            
        }
    TreeNode* lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
              TreeNode*ans=NULL;
        vector<TreeNode*> path1;
        findpath(root, p, path1);
           vector<TreeNode*> path2;
        findpath(root, q, path2);
     for(int i=0 ; i<min(path1.size(),path2.size());i++)
     {
          if(path1[i]==path2[i])
          {
           
              ans=path1[i];
          }
     }
        return ans ;
    }
};