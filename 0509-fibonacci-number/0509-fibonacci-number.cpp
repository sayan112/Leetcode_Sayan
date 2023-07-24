class Solution {
public:
      int  fibo ( int i , unordered_map<int,int>&mp)
      {
            if(i==0|| i==1)
        {
             return i; 
        }
           int curIdx= i ; 
           if(mp.find(curIdx)!=mp.end())
           {
                return mp[curIdx];
           }
           
        int need= fibo(i-1,mp)+fibo(i-2,mp);
          mp[curIdx]=need%1000000007;
        return       mp[curIdx];
      }
    int fib(int n) {
         unordered_map<int,int>mp;
       return  fibo(n,mp);
      
        
    }
};