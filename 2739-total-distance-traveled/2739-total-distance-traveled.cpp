class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
     
        int travel=0;
         while(mainTank && additionalTank)
         {
             
                if(mainTank>=5)
                {
                    travel+=(5*10);
                    mainTank-=5;
                    if(additionalTank>=1)
                    {
                       mainTank+=1;
                        additionalTank--;
                    }
                }
             else{
                  travel+=(mainTank*10);
                 mainTank-=mainTank;
                  break;
             }
         }
        
                          travel+=(mainTank*10);
         return travel;
    }
};