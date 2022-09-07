class Solution {
public:
     int minpath(vector<vector<int>>& grid, int m , int n , int row , int col,   unordered_map<string,int>&mp)
     {
         
          if(row==m-1 && col==n-1)
          {
               return grid[row][col];
          }
           if(row>m-1 || col>n-1)
          {
               return INT_MAX-100;
          }
          string curIdx= to_string(row)+'_'+to_string(col);
          if(mp.find(curIdx)!=mp.end())
          {
               return mp[curIdx];
          }
         
          int left =  grid[row][col]+ minpath(grid, m,n , row,col+1,mp);
         int bot=  grid[row][col] + minpath(grid,m,n,row+1,col,mp);
          mp[curIdx]=min(left,bot);
          return mp[curIdx];
             
     }
    int minPathSum(vector<vector<int>>& grid) {
        
         int m = grid.size();
         int n = grid[0].size();
         int row=0;
         int col= 0;
        unordered_map<string,int>mp;
        return minpath(grid,m,n,row,col,mp);
    }
};