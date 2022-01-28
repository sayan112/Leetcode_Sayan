class Solution {
public:
    int need (int m, int n, int maxMove, int startRow, int startColumn,   unordered_map<string,int>&mp)
    {
           int  mod = 1e9+7;
         if(startRow>m-1 || startRow<0 || startColumn>n-1 || startColumn<0 )

         {
             return 1; 
             
         }
         if(maxMove<=0)
         {
              return 0 ;
         }
        
                string currentKey = to_string(startRow) + "_" + to_string(startColumn) + "_" + to_string(maxMove);
      
        if(mp.find(currentKey)!=mp.end()){
            return mp[currentKey];
        }
         long long int  right =  need (m,n,maxMove-1, startRow,startColumn+1,mp)%mod;
        long long int left =  need (m,n,maxMove-1, startRow,startColumn-1,mp)%mod;
    long long int top =  need (m,n,maxMove-1, startRow-1,startColumn,mp)%mod;
 long long int down =  need (m,n,maxMove-1, startRow+1,startColumn,mp)%mod;
     
         mp[currentKey]= (right+left+top+down)%mod;
         return mp[currentKey] ; 
        
        
     
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        unordered_map<string,int>mp;
         return  need(m,n,maxMove,startRow,startColumn,mp);
    }
};