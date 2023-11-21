class Solution
{
    public:
        void setRow(vector<vector < int>> &matrix, int fixrow)
        {
            for (int i = 0; i < matrix[0].size(); i++)
            {
                if(  matrix[fixrow][i]!=0)
                {
                         matrix[fixrow][i] = -19999;
                }
           
            }
        }
    void setCol(vector<vector < int>> &matrix, int fixCol)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            
                if(   matrix[i][fixCol]!=0)
                {
                         matrix[i][fixCol] = -19999;
                }
          
        }
    }
    void setZeroes(vector<vector < int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    setRow(matrix, i);
                    setCol(matrix, j);
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == -19999)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};