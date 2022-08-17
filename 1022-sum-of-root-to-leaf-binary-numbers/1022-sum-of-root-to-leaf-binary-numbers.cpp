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
    vector<string>ans ; 
    long binaryToDecimal(long n)
{
 long num = n;
     long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
     long base = 1;
 
     long temp = num;
    while (temp) {
       long last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
     void  sumroottoleaf(TreeNode* root, string vec)
     {
         if(!root)
         {
             return ;
         }
       vec+=(root->val+'0');
         if(root->left==NULL && root->right==NULL)
         {
             ans.push_back(vec);
              return ; 
         }
          sumroottoleaf(root->left,vec);
         sumroottoleaf(root->right,vec);
         
     }
    int sumRootToLeaf(TreeNode* root) {
       string vec;
        sumroottoleaf(root,vec);
         long sum=0;
        for(auto elem : ans )
        {
        sum+= (stoi(elem, 0, 2));
        }
         return sum;
    }
};