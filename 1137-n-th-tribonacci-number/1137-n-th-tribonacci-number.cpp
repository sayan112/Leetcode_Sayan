class Solution {
public:
 unordered_map<int,int>mp;
int tribonacci(int n) {
          
      if(n==1 || n==0)
        {
            return n  ;
        }
    if(n==2)
    {
        return 1 ;
        
    }
        
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
    
      
    int ans= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
      mp[n] =  ans ;
        return ans ;
    
}
};