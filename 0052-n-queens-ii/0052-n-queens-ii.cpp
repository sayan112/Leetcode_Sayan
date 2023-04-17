class Solution {
        private:
     bool isSafe ( int row , int col , vector<string> &board  , int n  )
     {
          // check the diagonal upper side is there any Q 
         
          // `
          //    `
          //      `
          //        ` 
         int checkrow=row;
         int checkcol=col;
         while(row>=0 && col>=0 )
         {
             if(board[row][col]=='Q')
             {
                 return false;
                  
             }
            row--;
            col--;
             
         }
         
           row=checkrow;
          col=checkcol; 
         
      
         
          // moving to the left and trying to find Q 
         
         // `   `   `   `  
         while(col>=0)
         {
             if(board[row][col]=='Q')
             {
                 return false;
                  
             }
           
           col--;
             
         }
         
         
            row=checkrow;
          col=checkcol;
             // check the diagonal lower side is there any Q 
         
          // `
          //    `
          //      `
          //        ` down 
         
              while(row<n && col>=0 )
         {
             if(board[row][col]=='Q')
             {
                 return false;
                  
             }
             row++;
           col--;
             
         }
          return true;
              
     }
        void solve(vector<string> &board, int col, int n, vector<vector< string>> &ans) {
            if(col==n)
            {
                ans.push_back(board);
                 return ;
            }
             for(int row=0;row<n;row++)
             {
                 if(isSafe(row,col,board,n))
                 {
                     board[row][col]='Q';
                     solve(board,col+1,n,ans);
                        board[row][col]='.';
                 }
                 
             }
        }
public:
    int totalNQueens(int n) {
          vector<vector < string>> ans;
            vector<string> board(n);
            string s(n, '.');
            for (auto &elem: board)
            {
                elem = s;
            }
            solve(board, 0, n, ans);
            return ans.size();
    }
};