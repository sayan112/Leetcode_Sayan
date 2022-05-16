class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int sum =0;
     
         for(int i=0; i < mat.size();i++)
         {
               for(int j=0; j < mat[0].size();j++)
         {
                    if(j==i)
                    {
                        
                          sum+=mat[i][j];
                    }
             
         }
         }
         int n = mat.size()-1;
         int m=0;
         while(m>=0 && n>=0)
         {
              if(n!=m)
              {
                 
                  sum+=mat[n][m];
              }
             n--;
             m++;
              
         }
         return sum ;
        
    }
};