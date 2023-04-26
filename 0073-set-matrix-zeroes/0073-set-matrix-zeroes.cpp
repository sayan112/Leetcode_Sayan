class Solution
{
    private:
        void maketheRowZero(int i, vector<vector < int>> &matrix)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] != 0)
                {
                    matrix[i][j] = INT_MAX-100;
                }
            }
        }
    void maketheColZero(int j, vector<vector < int>> &matrix)
    {

        for (int i = 0; i < matrix.size(); i++)
        {

            if (matrix[i][j] != 0)
            {
                matrix[i][j] =  INT_MAX-100;
            }
        }
    }
    public:

        void setZeroes(vector<vector < int>> &matrix)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {

                    if (matrix[i][j] == 0)
                    {

                        maketheRowZero(i, matrix);
                        maketheColZero(j, matrix);
                    }
                }
            }

            for (auto &elem: matrix)
            {
                for (auto &elem1: elem)
                {
                    if (elem1 ==  INT_MAX-100)
                    {
                        elem1 = 0;
                    }
                }
            }
        }
};