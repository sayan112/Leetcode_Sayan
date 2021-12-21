class Solution {
public:
    bool isPowerOfTwo(int n) {
      if(n==0)
      {
           return false;
      }
          if(n==1)
      {
           return true;
      }
        
         if(n%2!=0)
         {
              return false;
         }
        else{
         
            // 16 8 4 2 
            //     18 9 
             while(n!=1)
             {
                  n= n/2;
                  if(n!=1 && n%2!=0)
                  {
                       return false;
                  }
                 // cout << n ;
             }
             return true;
            // cout 
            //     <<endl;
            //  return false;
            
            
            
            
        }
    }
};