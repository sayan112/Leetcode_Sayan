class Solution {
public:
    int maximumCount(vector<int>& nums) {
     
        int negative = 0 ; 
         int positive =0;
        int maxi=0;
         for(auto elem : nums )
         {
         if(elem>0)
         {
              positive++;
              maxi=max(maxi,positive);
         }
             else if(elem<0){
               negative++;  
                 maxi=max(maxi,negative);
             }
         }
         return maxi;
         
    }
};