class Solution {
public:
    
     void allpaths(TreeNode* root, vector<int>need,   vector<vector<int>>&ans)
     {
          if(root==NULL)
          {
              return ; 
          }
          need.push_back(root->val);
         if(root->right==NULL && root->left==NULL)
         {
             ans.push_back(need);
         }
          
          allpaths(root->left,need,ans);
          allpaths(root->right,need,ans);
         
     }
    vector<string> binaryTreePaths(TreeNode* root) {
          vector<string>op;
        vector<int>need;
         vector<vector<int>>ans;
        
    allpaths(root , need,ans);
         for(auto elem : ans )
         {
              string ans1;
             for( int i =0;i<elem.size();i++)
             {
                   ans1+=to_string(elem[i]);
                  if(i!=elem.size()-1)
                  {
                      
                 ans1+='-';
                    ans1+='>';
                  }
               
             }
             op.push_back(ans1);
            
         }
         return op; 
        
        
    }
};