class Solution {
public:
      int countnoofpaths(int i , int j , int m , int n,unordered_map<string,int>&mp )
      {
           if(i==m-1 && j ==n-1)
           {
               return 1;
           }
           string curidx = to_string(i) + "_" + to_string(j);
              if (mp.find(curidx) != mp.end())
            {
                return mp[curidx];
            }
          if(i>=m || j>=n)
          {
              return 0;
          }
          else{
               mp[curidx] = countnoofpaths(i+1,j,m,n,mp)+ countnoofpaths(i,j+1,m,n,mp);
               return mp[curidx];
          }
          
      }
    int uniquePaths(int m, int n) {
        
         int i =0;
         int j =0;
        unordered_map<string, int> mp;
         
         return countnoofpaths(i,j,m,n,mp);
    }
};