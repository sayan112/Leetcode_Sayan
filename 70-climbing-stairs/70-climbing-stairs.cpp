class Solution {
public:
     int totalWays(int n ,int currentstair ,   unordered_map<int,int>&mp)
     {
      if(currentstair==n)
      {
          return 1;
          
      }
         if(currentstair>n)
         {
             return 0;
         }
         
         if(mp.find( currentstair )!= mp.end())
         {
             return mp[ currentstair ];
         }
        
    int chalo1=  totalWays(n,currentstair+1,mp);
        int chalo2= totalWays(n,currentstair+2,mp);
         mp[currentstair]   = chalo1+chalo2;
     
        
        return    mp[currentstair]   ; 
     }
    
    
    int climbStairs(int n) {
              unordered_map<int,int>mp;
        return totalWays(n,0,mp);
        
    }
     
};