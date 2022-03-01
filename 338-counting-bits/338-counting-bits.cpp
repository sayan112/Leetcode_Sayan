class Solution {
public:
    vector<int> countBits(int n) {
         vector<int>ki ;
           int   count = 0   ;
      for (int i = 0; i <=n; i++)
      {
count=0;
int sex = i ;
  while (sex!=0)
      {
          sex= sex& sex-1;
          count++;

               }
                ki.push_back(count);

      }
        
     return ki;

      
    
      
    }
};