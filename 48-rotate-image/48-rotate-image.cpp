class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // at first transepose the matrix
      vector<vector<int>> need=matrix;
         for(int i =0; i < matrix.size();i++)
         {
               for(int j =0; j < matrix[0].size();j++)
         {
             
                   matrix[i][j]=need[j][i];
         }
         }
        
        
        
           for(int i =0; i < matrix.size();i++)
         {
               for(int j =0; j < matrix[0].size();j++)
         {
             
                 cout<< matrix[i][j]<<" ";
         }
                cout <<endl;
         }
        
            for(int i =0; i < matrix.size();i++)
         {
          
                 int start=0;
                 int end = matrix[0].size()-1;
                while(end>start)
                {
                    swap(matrix[i][start],matrix[i][end]);
                         end--;
                          start++;
                }
         }
        
        
        
    }
};