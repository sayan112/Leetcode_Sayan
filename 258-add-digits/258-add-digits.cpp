class Solution {
public:
    int addDigits(int n) {
       int count =0;
         int sum =n ;
         while(sum>9)
         {
           
              sum=0;
              while(n)
              {
                  
      
             int digit= n%10;
              sum+=digit;
              n=n/10;
                          }
             n= sum;
             
         }
         return sum ;
        
        
    }
};