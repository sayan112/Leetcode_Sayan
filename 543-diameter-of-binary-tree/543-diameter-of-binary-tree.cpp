
class Solution
{
    public:
        int maxi = 0;
     int countheight(TreeNode *node)
     {
          if(!node)
         {
              return 0 ;
         }
      int left=  countheight(node->left);
       int right=  countheight(node->right);
        return 1+max(left,right);
     }
void countdiameter(TreeNode *node)
    {
        if (!node)
        {
            return ;
        }
        int leftheight = countheight(node->left);
        int rightheight = countheight(node->right);
       int sum =  leftheight +  rightheight;
        maxi=max(maxi,sum);
        countdiameter(node->left);
        countdiameter(node->right);
        

    } 

    int diameterOfBinaryTree(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }

        countdiameter(root);
        return maxi;
    }
};