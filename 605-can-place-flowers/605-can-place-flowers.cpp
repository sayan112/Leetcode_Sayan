class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int a) {
         int count=0;

         for (int i=0; i < f.size();i++)
         {
              if(f[i]==0)
              {
                   if ((i == 0 || f[i - 1] == 0) && (i == f.size() - 1 || f[i + 1] == 0)) {
             {
                         f[i]=1;
                 count++;
             }
              }
              }
             else{
                 continue;
             }
           
         }
         if(count>=a)
         {
             return true;
         }
        else{
            return false;
        }
        
    
    }
};