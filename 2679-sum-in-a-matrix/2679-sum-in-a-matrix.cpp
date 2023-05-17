class Solution {
public:
    int matrixSum(vector<vector<int>>& matrix) {
          int rows = matrix.size();
    int columns = matrix[0].size();
         int sum =0;
          for(auto &i: matrix){
            sort(i.begin(),i.end());
        }
          for (int j = 0; j < columns; ++j) {
               int maxi=INT_MIN;
        for (int i = 0; i < rows; ++i) {
             if(maxi<=matrix[i][j] )
             {
                 maxi=matrix[i][j] ;
             }
          cout << matrix[i][j] << " ";
        }
              sum+=maxi;
              cout<<endl;
          }
         return sum;
    }
};