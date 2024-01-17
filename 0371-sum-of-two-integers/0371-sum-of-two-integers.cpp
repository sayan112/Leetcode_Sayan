class Solution {
public:
    int getSum(int a, int b) {
         if(b<=0)
         {
              for(int i =0;i<=(b*-1);i++)
      {
          a--;
      }
         return a+1;
         }
       
      for(int i =0;i<=b;i++)
      {
          a++;
      }
         return a-1;
    }
};