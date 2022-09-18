class Solution {
public:
    int longestContinuousSubstring(string s) {
     
         int size =1;
         int maxi =-1;
 for( int i =1; i < s.size();i++)
 {
      if(s[i]-s[i-1]==1)
      {
          size++;
          
      
      }
     else{
         size=1;
     }
         maxi=max(maxi,size);
 }
         
         if(maxi==-1)
         {
              return 1;
         }
         return maxi;
        
        
        
    }
};