class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            vector<vector < int>> matrix1 = matrix;
             int col=matrix[0].size();
                 int row =matrix.size();
            cout << row << " "<<col <<endl;

            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j <  col; j++)
                {
                    if (matrix[i][j] == 0)
                    {

                        cout << i << " " << j << endl;
                        for (int k = 0; k <col; k++)

                        {
                            matrix1[i][k] = 0;
                        }
                        for (int k = 0; k <row; k++)

                        {
                            matrix1[k][j] = 0;
                        }
                    }
                }
            }
            matrix.clear();
            matrix = matrix1;
        }
};