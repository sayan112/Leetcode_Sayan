class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
       // 10001000
         long long int  ans =1;
         int count =0;
         bool flag =false;
         int mod = pow(10,9)+7;
        
            for(auto elem : nums)
            {
         if(elem==1)
         {
              flag=true;
             ans=(ans*(count+1))%mod;
             count=0;
         }else if(flag){
             count++;
         }
                
            }
         if(!flag)
         {
             return 0;
         }

         return (ans%mod) ;
    }
};