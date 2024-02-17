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
        void sumofLeft(TreeNode *root, int &sum, bool check) {
          if(!root)
          {
               return ;
          }
             if( check&& (!root->left&&!root->right))
                {
                     sum+=root->val;
                  return ;
                }
            sumofLeft(root->left , sum , true );
             sumofLeft(root->right , sum, false );
        }

    int sumOfLeftLeaves(TreeNode *root)
    {

        int sum = 0;
         bool check=false;
        sumofLeft(root, sum,check);
         return sum;
    }
};