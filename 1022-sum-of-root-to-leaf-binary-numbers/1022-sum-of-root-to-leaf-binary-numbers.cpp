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

        void sum_root_to_leaf(TreeNode *root, string need,int &sum)
        {
            if(!root)
            {
                 return ; 
                
            }
             if(!root->left && !root->right)
             {
                need+=root->val+'0';
                 sum+=stoi(need,0,2);
                  return;
             }
             need+=root->val+'0';
             
            sum_root_to_leaf(root->left , need , sum );
            sum_root_to_leaf(root->right , need , sum);
        }
    int sumRootToLeaf(TreeNode *root)
    {
        string need;
int sum=0;
        sum_root_to_leaf(root,need , sum);
         return sum;
    }
};