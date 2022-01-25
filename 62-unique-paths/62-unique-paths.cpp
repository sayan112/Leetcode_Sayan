class Solution {
public:
     int need ( int  m,int n, int row, int col,unordered_map<string ,int>&mp)
     {
          if(row>=m || col >=n)
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
         
          int need1 = need(m,n,row+1,col,mp);
          int need2 = need(m,n, row,col+1,mp);
                      mp[currentKey]=need1+need2;
            return mp[currentKey];
         
         
     }
    int uniquePaths(int m, int n) {
        
        
         unordered_map<string ,int>mp;
     return     need(m,n,0,0,mp);
        
        
    }
};