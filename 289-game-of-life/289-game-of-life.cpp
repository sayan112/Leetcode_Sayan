class Solution {
public:
   // int m,n;
    int solve(int i,int j, vector<vector<int>>a)
    {
         int m=a.size();
         int n=a[0].size();
         //cout<<m<<" "<<n<<endl;
        int c=0;
        if( j>0 && (a[i][j-1]==1 || a[i][j-1]==4 || a[i][j-1]==5))
            c++; 
        if(j<n-1 && (a[i][j+1]==1 || a[i][j+1]==4 || a[i][j+1]==5))
            c++; 
        if(i>0 && (a[i-1][j]==1 || a[i-1][j]==4 || a[i-1][j]==5 ) )
            c++; 
        if(i<m-1 &&( a[i+1][j]==1 || a[i+1][j]==4 || a[i+1][j]==5 ))
            c++;
        if(i>0 && j>0 && (a[i-1][j-1]==1 || a[i-1][j-1]==4 || a[i-1][j-1]==5 ) )
            c++; 
        if(i<m-1 && j<n-1 && (a[i+1][j+1]==1 || a[i+1][j+1]==4 ||a[i+1][j+1]==5 ))
            c++; 
        if(i>0 && j<n-1 && (a[i-1][j+1]==1 ||a[i-1][j+1]==4 || a[i-1][j+1]==5 ))
            c++; 
        if(i<m-1 && j>0 && (a[i+1][j-1]==1 || a[i+1][j-1]==4 || a[i+1][j-1]==5 ))
            c++; 
        
        return c;
    }
    void gameOfLife(vector<vector<int>>& board) {
        //vector<vector<int>>tmp=board;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               int x=solve(i,j,board);
                if(board[i][j])
                {
                     if(x<2 or x>3)
                       board[i][j]=4; 
                    else
                        board[i][j]=5;
                    
                }
                else
                {
                    if(x==3)
                       board[i][j]=3;
                    else
                        board[i][j]=2;
                }
            
            }
        }
     for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
             {
                 if(board[i][j]==2 || board[i][j]==4)
                     board[i][j]=0;
                else
                    board[i][j]=1;
             }
     }
        
    }
};