class Solution
{
    public:
     int ans =0;
    void sumroottoleaf(TreeNode *root, string vec)
    {
        if (!root)
        {
            return;
        }
        vec += (root->val + '0');
        if (root->left == NULL && root->right == NULL)
        {
       ans+= stoi(vec, 0, 2);
        }
        sumroottoleaf(root->left, vec);
        sumroottoleaf(root->right, vec);
    }
    int sumRootToLeaf(TreeNode *root)
    {
        string vec;
        sumroottoleaf(root, vec);
     
        return ans;
    }
};