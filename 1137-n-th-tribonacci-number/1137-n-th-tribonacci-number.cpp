class Solution {
public:
 unordered_map<int,int>mp;
int tribonacci(int n) {
          
      if (n==0)
        {
            return 0  ;
        }
    else if  (n==2 || n==1)
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