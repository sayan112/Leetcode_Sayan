/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool checkpathsum(TreeNode *root, int sum, int targetSum)
        {
            if (!root)
            {
                 
                return false;
            }
            if (!root->left && !root->right) {
                sum+=root->val;
                if(targetSum==sum)
                {
                    return true;
                }
               
            }
sum+=root->val;
           return  checkpathsum(root->left, sum, targetSum) ||   checkpathsum(root->right, sum, targetSum);
        }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int sum = 0;
      return  checkpathsum(root, sum, targetSum);
    }
};