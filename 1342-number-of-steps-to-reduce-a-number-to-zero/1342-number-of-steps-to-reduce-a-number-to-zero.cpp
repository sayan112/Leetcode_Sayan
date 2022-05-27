class Solution {
public:
    int numberOfSteps(int num) {
        int check =num;
         int count =0;
          while(check!=0)
          {
              if((check%2)==0)
              {
                  check=check/2;
              }
              else{
                  check=check-1;
              }
              count++;
          }
         return count ; 
        
        
    }
};