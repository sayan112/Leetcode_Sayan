class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
         if(asteroids.size()==1)
         {
             if(asteroids[0]>mass)
             {
                 return false;
             }
             else{
                  return true;
             }
         }

        long long int  sum = mass ; 
         sort(asteroids.begin(),asteroids.end());
        
            for(int i =0 ; i < asteroids.size(); i++)
            {
                 if(sum>=asteroids[i])
                 {
                         sum+= asteroids[i];
                 }
                else{
                     return false;
                }
            
                 
            }
         return true;
       
     
    }
};


//  3  5 9 19 21 