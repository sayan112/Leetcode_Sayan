class Solution {
public:
    int nthfib( unordered_map<int,int>&mp,int n )
    {
        if(n<=1)
        {
            return n ; 
        }
        int curkey=n;
         if(mp.find(curkey)!=mp.end())
         {
              return mp[curkey];
         }
         int onestep= nthfib(mp,n-1);
        int twostep= nthfib(mp,n-2);
    mp[curkey ]= onestep+twostep;
         return mp[curkey];
    }
    int fib(int n) {
        unordered_map<int,int>mp;
       return   nthfib(mp,n);
    }
};