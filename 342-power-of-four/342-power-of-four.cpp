class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        {
            return true;
        }
        if(n%4!=0)
        {
             return false;
        }
         while(n>1)
         {
           cout << n <<endl;
             if(n%4==0)
             {
                   n=n/4;
                 
             }
             else{
                 return false;
             }
         }
        if(n==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};