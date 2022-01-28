class Solution {
public:
    int fib(int n) {
        if(n==1 || n==0)
        {
            return n  ;
        }
          unordered_map<int,int>mp;
              int currentKey = n;
        
        if(mp.find(currentKey)!=mp.end()){
            return mp[currentKey];
        }
     int ans  = fib(n-1)+fib(n-2); 
     return ans ;
    }
};