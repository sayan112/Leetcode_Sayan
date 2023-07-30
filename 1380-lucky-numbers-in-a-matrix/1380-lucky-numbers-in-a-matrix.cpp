class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
   
        vector<int>ans;
         vector<int>minirow(matrix.size(),INT_MAX);
             vector<int>maxicol(matrix[0].size(),INT_MIN);
        
         for(int i =0;i< matrix.size();i++)
         {
             
                 for(int j =0;j< matrix[0].size();j++)
         {
             minirow[i]=min( minirow[i], matrix[i][j]);
                     maxicol[j]=max(maxicol[j],matrix[i][j]);
         }
            
         }
        
    
        
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