class Solution {
public:
    int minMoves(int n, int m) {
        unsigned long long int realneed=0;
          if(m==0)
  {
      return n-1;
  }
      while (n)
      {
           if(n%2==0)
           {
                if(m!=0)
                {
                   n=n/2;
                   m--;
                   realneed++;
                }
                else
                {
                    return realneed+(n-1);
                realneed++;
                n--;
                }
                

           }
           else
           {
                realneed++;
                n--;

           }
           
      }
         return realneed-1;
    }
};