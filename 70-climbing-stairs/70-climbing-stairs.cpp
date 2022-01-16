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
         int key=  currentstair ;
         
         if(mp.find( key )!= mp.end())
         {
             return mp[key ];
         }
        
    int chalo1=  totalWays(n,currentstair+1,mp);
        int chalo2= totalWays(n,currentstair+2,mp);
         mp[key]   = chalo1+chalo2;
     
        
        return    mp[key]   ; 
     }
    
    
    int climbStairs(int n) {
              unordered_map<int,int>mp;
        return totalWays(n,0,mp);
        
    }
     
};