class Solution
{
    public:
        void dfs(int row, int col, vector<vector < int>> &visited, vector< vector< char>> &grid, int n, int m, int delrow[], int delcol[])
        {
            if (row < 0 || col < 0 || row > grid.size() - 1 || col > grid[0].size() - 1 || visited[row][col] || grid[row][col] == '0') return;

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                visited[row][col] = 1;
                dfs(nrow, ncol, visited, grid, n, m, delrow, delcol);
            }
        }
    int numIslands(vector<vector < char>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector < int>> visited(n, vector<int> (m, 0));
        int delrow[] = { -1,
            0,
            1,
            0
        };
        int delcol[] = { 0,
            1,
            0,
            -1
        };
        int countofisland = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1' && visited[i][j] == 0)
                {

                    dfs(i, j, visited, grid, n, m, delrow, delcol);

                    countofisland++;
                }
            }
        }
        return countofisland;
    }
};