class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
        {
            return true;
        }
        if(n%3!=0)
        {
            return false;
        }
        while(n>1)
        {
            if(n%3!=0)
            {
                return false;
            }
            n=n/3;
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