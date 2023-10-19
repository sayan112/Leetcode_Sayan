class Solution {
public:
     void setRow(int row ,vector<vector<int>>& matrix )
     {
         for(int i =0;i<matrix[0].size();i++)
         {
             if(   matrix[row][i]!=0)
             {
                    matrix[row][i]=-138423; 
             }
         
         }
     }
     void setCol(int col ,vector<vector<int>>& matrix )
     {
         for(int i =0;i<matrix.size();i++)
         {
             if( matrix[i][col]!=0)
             {
                       matrix[i][col]=-138423;
             }
         }
     }
    void setZeroes(vector<vector<int>>& matrix) {
     
         for(int i=0;i<matrix.size();i++)
         {
              for(int j=0;j<matrix[0].size();j++)
         {
             if(matrix[i][j]==0)
             {
                 setRow(i,matrix);
                 setCol(j,matrix);
             }
         } 
         }
        
        
             for(int i=0;i<matrix.size();i++)
         {
              for(int j=0;j<matrix[0].size();j++)
              {
                  if(matrix[i][j]==-138423)
                  {
                      matrix[i][j]=0;
                  }
              }}
        
    }
};