class Solution
{
    public:
        bool isValidSudoku(vector<vector < char>> &board)
        {

            vector<set < int>> col(9), row(9), box(9);
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9; j++)
                {
                     if (board[i][j] == '.')
                    {
                        continue;
                    }
                    int digit = board[i][j] - '0';
                   

                    if (row[i].count(digit) || col[j].count(digit) || box[(i / 3) *3 + j / 3].count(digit))
                    {
                        return false;
                    }

                    row[i].insert(digit);
                    col[j].insert(digit);
                    box[(i / 3) *3 + j / 3].insert(digit);
                }
            }
            return true;
        }
};