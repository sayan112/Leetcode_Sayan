class Solution {
public:
         int need ( int  m,int n, int row, int col,unordered_map<string ,int>&mp,vector<vector<int>>& obstacleGrid)
     {
        
          if(row>=m || col >=n)
          {
               return 0 ; 
          }
                if(obstacleGrid[row][col]==1)
             
             {
                   return 0 ; 
              }
           
          if(row==m-1 && col ==n-1)
          {
               return 1 ; 
          }
             
      
      string currentKey = to_string(row) + "_" + to_string(col);
            
        if(mp.find(currentKey)!=mp.end()){
           return mp[currentKey];
        }
         
          int need1 = need(m,n,row+1,col,mp,obstacleGrid);
          int need2 = need(m,n, row,col+1,mp,obstacleGrid);
                      mp[currentKey]=need1+need2;
            return mp[currentKey];
         
         
     }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
         int m = obstacleGrid.size();
         int n= obstacleGrid[0].size();
        unordered_map<string ,int>mp;
          return need (m,n,0,0,mp,obstacleGrid)  ; 

    }
};