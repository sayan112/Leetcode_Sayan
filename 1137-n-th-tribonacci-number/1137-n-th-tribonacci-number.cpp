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
      
              int currentKey = n;
        
        if(mp.find(currentKey)!=mp.end()){
            return mp[currentKey];
        }
    
      
    int ans= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
      mp[currentKey] =  ans ;
        return ans ;
    
}
};