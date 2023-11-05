class Solution {
public:
    
     bool checkoftwo ( int n )
     {
          if(n==1)
          {
               return true;
          }
          if(n==0||n%2!=0)
          {
              return false;
          }
         
         
        return checkoftwo(n/2);
     }
    bool isPowerOfTwo(int n) {
       return checkoftwo(n);
    }
};