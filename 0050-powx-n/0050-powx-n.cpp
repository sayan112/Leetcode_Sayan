class Solution
{
    public:
        double myPow(double x, int n)
        {
            double sum = 1.00;
            long need = n;
            if (n < 0)
            {
                need = (double)-1* n;
            }
            while (need > 0)
            {
                if (need % 2 == 1)
                {
                    sum = sum * x;
                    need = need - 1;
                }
                else
                {
                    x = x * x;
                    need = need / 2;
                }
            }
             if(n<0)
             {
                  return (double)1.00/(double)sum;
             }
            else{
                 return sum;
            }
        }
};