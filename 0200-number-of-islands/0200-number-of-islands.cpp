class Solution
{
    public:
        void BFS(vector<vector < char>> &grid, int row, int col, vector< vector< int>> &visited , int del_row[], int del_col[] )
        {
            visited[row][col] = 1;
            int n = grid.size();
            int m = grid[0].size();
            queue<pair<int, int>> q;
            q.push({ row,
                col });
            while (!q.empty())
            {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                
               	//checking all  8 direction 

//                 for (int delcol = -1; delcol <= 1; delcol++)
//                 {
//                     for (int delrow = -1; delrow <= 1; delrow++)
//                     {
//                         int nrow = delrow + row;
//                         int ncol = delcol + col;
//                         if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && visited[nrow][ncol] == 0)
//                         {
//                             visited[nrow][ncol] = 1;
//                             q.push({ nrow,
//                                 ncol });
//                         }
//                     }
//                 }
                
                
                // we have to check only 4 direction 
                 for (int i =0; i < 4 ;i++ )
                 {
                    
                             int nrow = del_row[i] + row;
                        int ncol = del_col[i] + col;
                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && visited[nrow][ncol] == 0)
                        {
                            visited[nrow][ncol] = 1;
                            q.push({ nrow,
                                ncol });
                        }
                 }
            }
        }

    int numIslands(vector<vector < char>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector < int>> visited(n, vector<int> (m, 0));
        int count = 0;
        // for four directions 
        int del_row[] = {-1, 0, 1, 0};
        int del_col[] = {0, 1, 0, -1};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (visited[i][j]==0 && grid[i][j] == '1')
                {
                    int row = i;
                    int col = j;
                    count++;
                    BFS(grid, row, col, visited ,del_row, del_col);
                }
            }
        }
        return count;
    }
};