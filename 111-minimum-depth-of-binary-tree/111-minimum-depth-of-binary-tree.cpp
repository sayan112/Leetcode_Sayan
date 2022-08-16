/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int minDepth(TreeNode *root)
        {
            queue<TreeNode *>q;
            if(!root)
            {return 0;
             }
            q.push(root);
            int depth=1;
            while(!q.empty())
            {
                int size=q.size();
                while(size--)
                {
                   TreeNode *node=q.front();
                    q.pop();
                    if(node->left==NULL && node->right==NULL)
                    {
                        return depth;
                    }
                    if(node->left)
                    {
                        q.push(node->left);
                    }
                     if(node->right)
                    {
                        q.push(node->right);
                    }
                }
                depth++;
                
            }
             return depth;
            
        }
    
};