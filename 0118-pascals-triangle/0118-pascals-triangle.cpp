class Solution {
public:
   void   creatingthepascaltriangle(int row ,   vector<vector<int>>&ans )
      {
           vector<int>ansrow;
           ansrow.push_back(1);
       int need=1;
           for(int col=1;col<row;col++  )
           {
               need=need * (row-col);
               need=need/col;
               ansrow.push_back(need);
           }
        ans.push_back(ansrow);
      }
    vector<vector<int>> generate(int numRows) {
       
            vector<vector<int>>ans ; 
         for(int i =1;i<=numRows;i++)
         {
             creatingthepascaltriangle(i,ans);
         }
         return ans ;
    }
};