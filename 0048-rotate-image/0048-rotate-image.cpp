class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>cpyMatrix=matrix;
        for(int i =0;i<matrix.size();i++)
        {
              for(int j =0;j<matrix[0].size();j++)
        {
             cpyMatrix[i][j]=matrix[j][i];
        }
        }
         for(auto &elem : cpyMatrix)
         {
             reverse(elem.begin(),elem.end());
         }
    matrix=cpyMatrix;
        
        
    }
};