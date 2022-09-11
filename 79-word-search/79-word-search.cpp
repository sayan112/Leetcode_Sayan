class Solution {
public:
     bool  search ( vector<vector<char>>& board, int i , int j ,int m , int n , string word , int idx  )
     {
         
         if(idx>=word.size())
         {
              return true;
         }
         if(i<0 || j<0 || i==m||j==n|| board[i][j]!=word[idx])
         {
              return false;
         }
          char need=board[i][j];
         board[i][j]='#';
        
          bool option1=search(board,i+1,j,m,n,word,idx+1);
          bool option2=search(board,i,j+1,m,n,word,idx+1);
          bool option3=search(board,i-1,j,m,n,word,idx+1);
          bool option4=search(board,i,j-1,m,n,word,idx+1);
             board[i][j]=need;
         
         
         return option1||option2||option3||option4;
     }
    bool exist(vector<vector<char>>& board, string word) {
     
         int m = board.size();
         int n = board[0].size();
         for(int i =0; i < m ;i++)
         {
                for(int j =0; j< n ;j++)
         {
                     if(board[i][j]==word[0])
                     {
                            if(search(board,i,j,m,n,word,0))
                            {
                                return true;
                            }
                     }
          
         }
         }
         return false;
    }
};