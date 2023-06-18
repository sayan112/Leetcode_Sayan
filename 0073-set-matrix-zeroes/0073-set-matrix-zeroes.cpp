class Solution {
public:
    void setmatrixrow ( int i ,vector<vector<int>>& matrix , int col  )
    {
         for(int j =0; j < col ;j++)
         {
              if(matrix[i][j]!=0)
              {
                   matrix[i][j]=-100000011;
              }
         }
        
    }
      void setmatrixcol ( int j ,vector<vector<int>>& matrix , int row )
    {
         for(int i =0; i < row ;i++)
         {
              if(matrix[i][j]!=0)
              {
                   matrix[i][j]=-100000011;
              }
         }
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
       
        int row = matrix.size();
         int col = matrix[0].size();
         for(int i =0;i<row;i++)
         {
              for(int j =0;j<col;j++)
         {
              if(matrix[i][j]==0)
              {
                  setmatrixrow(i,matrix,col);
                  setmatrixcol(j,matrix,row);
              }
         }  
         }
        
              for(int i =0;i<row;i++)
         {
              for(int j =0;j<col;j++)
         {
                  if(matrix[i][j]==-100000011)
                  {
                    matrix[i][j]=0;   
                  }
              }
              }
        
    }
};