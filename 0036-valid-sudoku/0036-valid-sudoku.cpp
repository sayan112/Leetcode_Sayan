class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int>mp;
        for(int i=0;i<board.size();i++)
        {
           for(int j=0;j<board[0].size();j++)
            {
               
               
                if(board[i][j]=='.')
                {
                    continue;
                }
               else{
                                 string stRow="row"+to_string(i)+board[i][j];
               cout << stRow<<" ";
                string stCol="col"+to_string(j)+board[i][j];
               cout << stCol<<" ";
                string stSubBox=to_string(((i/3)*3+j/3))+"Box"+board[i][j];
               cout << stSubBox <<endl;
                    
                   mp[stRow]++;
                   mp[stCol]++;
                   mp[stSubBox]++;
                    if(mp[stRow]==2||mp[stCol]==2||mp[stSubBox]==2)
                    {
                        return false;
                    }
                   
               }

            }
        }
        return true;
    }
};