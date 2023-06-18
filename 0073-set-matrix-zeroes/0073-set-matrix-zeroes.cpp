class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            
            // space complexity-> O(n)+O(m)
//              Time complexity->O(2*n*m)
            int row = matrix.size();
            int col = matrix[0].size();
            vector<int>colarr(col,0);
             vector<int>rowarr(row,0);
            
            // O(n*m)
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        colarr[j] = 1;
                        rowarr[i] = 1;
                    }
                }
            }
             // O(n*m)
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if (colarr[j] || rowarr[i])
                    {
                        matrix[i][j] = 0;
                    }
                }
            }
         
        }
};