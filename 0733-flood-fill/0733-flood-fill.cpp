class Solution
{
    public:
        void Bfs(vector<vector < int>> &image, int initialcolor, int row, int col, int color, int del_row[], int del_col[])
        {
            int n = image.size();
            int m = image[0].size();

            queue<pair<int, int>> q;
             image[row][col]=color;
            q.push({ row,
                col });
            while (!q.empty())
            {
                int row = q.front().first;
                int col = q.front().second;

                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int nrow = row + del_row[i];
                    int ncol = col + del_col[i];

                      if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&  image[nrow][ncol] == initialcolor)
       
                    {
                         image[nrow][ncol]=color;
                        q.push({ nrow,
                            ncol });
                    }
                }
            }
        }
    vector<vector < int>> floodFill(vector<vector < int>> &image, int sr, int sc, int color)
    {

        int del_row[] = { -1,
            0,
            1,
            0
        };
        int del_col[] = { 0,
            1,
            0,
            -1
        };
        int initialcolor = image[sr][sc];
         if(image[sr][sc]!=color)
         {
                 Bfs(image, initialcolor, sr, sc, color, del_row, del_col);
         }
    
         return image;
    }
};