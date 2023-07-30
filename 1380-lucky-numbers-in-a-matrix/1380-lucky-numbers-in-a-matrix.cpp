class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
         vector<int>minirow;
         for(int i =0;i< matrix.size();i++)
         {
              int mini =INT_MAX;
                 for(int j =0;j< matrix[0].size();j++)
         {
            if(mini>=matrix[i][j])
            {
                mini = matrix[i][j];
            }
         }
              minirow.push_back(mini);
              // cout << endl;
         }
        
         vector<int>maxicol;
        
               for(int j =0;j< matrix[0].size();j++)
         {
                      int maxi =INT_MIN;
                 for(int i =0;i< matrix.size();i++)
         {
             if(maxi<=matrix[i][j])
            {
                maxi = matrix[i][j];
            }
         }
                   maxicol.push_back(maxi);
         }
        
         // for(auto elem : maxicol)
         // {
         //      cout << elem <<" ";
         // }
        
         for(int i =0; i< matrix.size();i++)
         {
                
         for(int j =0; j< matrix[0].size();j++)
         {
              if(matrix[i][j]==minirow[i] && matrix[i][j]==maxicol[j])
              {
                  ans.push_back(matrix[i][j]);
              }
         }
         }
         return ans; 
    }
};