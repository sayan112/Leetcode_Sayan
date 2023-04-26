class Solution
{
    public:
        void rotate(vector<vector < int>> &matrix)
        {

           	// at first transepose the matrix
            vector<vector < int>> need = matrix;
            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {

                    matrix[i][j] = need[j][i];
                }
            }
// then reverse each row
            for (int i = 0; i < matrix.size(); i++)
            {

                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
};