class Solution
{
    public:
        int orangesRotting(vector<vector < int>> &grid)
        {

           	//  we have to go with the level wise soooo we can use BFS 

            int n = grid.size();
            int m = grid[0].size();

            queue<pair<pair<int, int>, int>> q;
            vector<vector < int>> visited(n, vector<int> (m, 0));
           	// ok so at first we have to check how many rotten orange we have  and mark them and put into our queue
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (grid[i][j] == 2)
                    {
                        visited[i][j] = 2;
                        q.push({{i,j},0});
                    }
                }
            }

           	// check all 4 directions :)
            int ansmax = 0;

            int delrow[] = { 0,
                -1,
                1,
                0
            };
            int delcol[] = { 1,
                0,
                0,
                -1
            };

            while (!q.empty())
            {
                int row = q.front().first.first;
                int col = q.front().first.second;

                int count = q.front().second;
                ansmax = max(ansmax, count);
                q.pop();
               	// getting the rotten row and col and going to level wise and mark them as roteen 
                for (int i = 0; i < 4; i++)
                {
                    int newrow = row + delrow[i];
                    int newcol = col + delcol[i];
                    if (newrow >= 0 && newrow < n && newcol >= 0 && newcol < m && grid[newrow][newcol] == 1 && visited[newrow][newcol] != 2)
                    {
                        q.push({
		{
                                newrow,
                                newcol
                            },
                            count + 1 });	// we have to increase the count as we grow to the higher level
                        visited[newrow][newcol] = 2;
                    }
                }
            }

           	// if we are not able to fill the grid with all rotten orenges 
           	// thats why we have to check if there is any fresh one left 
            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < m; j++)
                {
                    if (visited[i][j] != 2 && grid[i][j] == 1)
                    {
                        return -1;
                    }
                }
            }
            return ansmax;
        }
};