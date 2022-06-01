class Solution
{
    public:
        double ans(double x, long long int p)
        {
              if(p==0){
            return 1;
        }
        if(x==1){
            return 1;
        }
            
            if (p % 2 == 0)
            {
                return ans(x*x, p / 2);
            }
            else
            {
                return x*ans(x*x, p / 2);
            }
        }

    double myPow(double x, long long int n)
    {

        if (n < 0)
        {

            n = abs(n);
            x = 1 / x;
        }

        return ans(x, n);

        
    }
};