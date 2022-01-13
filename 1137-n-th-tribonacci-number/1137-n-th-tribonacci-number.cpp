class Solution {
public:
 unordered_map<int,int>mp;
int tribonacci(int n) {          
      if (n==0)
        {
            return 0  ;
        }
     if  (n==2 || n==1)
    {
        return 1 ;
        
    }        
        if(mp.find(n)!=mp.end()){
            return mp[n];
        }
      mp[n] =  tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3) ;
    
}
};