//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
     bool isSafetogo (int newx , int newy , vector<vector<int>> &matrix  , int n ,  vector<vector<bool>>&visited)
     {
         
          if( (newx>=0 && newx<n) && (newy>=0 && newy<n) && visited[newx][newy]!=1 && matrix[newx][newy]==1 )
          {
               return true;
          }
          else{
               return false;
          }
     }
     void solve (int x , int y ,  vector<vector<int>> &matrix , int n , string path ,   vector<string>&ans ,vector<vector<bool>>&visited  )
     {
         if(x==n-1&& y ==n-1)
         {
             ans.push_back(path);
              return ;
             
         }
         
          // 4 movements 
          // down 
          visited[x][y]=1;
           if(   isSafetogo(x+1,y,matrix,n,visited))
           {
               solve(x+1,y,matrix,n,path+'D',ans,visited);
           }
           
            if(  isSafetogo(x,y-1,matrix,n,visited))
           {
               solve(x,y-1,matrix,n,path+'L',ans,visited);
           }
           
            if( isSafetogo(x,y+1,matrix,n,visited))
           {
               solve(x,y+1,matrix,n,path+'R',ans,visited);
           } 
           
           if( isSafetogo(x-1,y,matrix,n,visited))
           {
               solve(x-1,y,matrix,n,path+'U',ans,visited);
           } 
         visited[x][y]=0;
     }
    vector<string> findPath(vector<vector<int>> &matrix, int n) {
        string path;
           vector<string>ans;
            if(matrix[0][0]==0)
            {
                 return ans;
            }
            vector<vector<bool>>visited(n,vector<bool>(n,0));
      
            

            solve(0,0,matrix,n,path,ans,visited);
                         return ans;
         
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends