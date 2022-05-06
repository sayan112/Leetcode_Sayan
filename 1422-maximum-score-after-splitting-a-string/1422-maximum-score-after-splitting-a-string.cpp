class Solution {
public:
    int maxScore(string s) {
         int noofone=0;
           int noofzero=0;
         for(auto elem : s )
         {
             if(elem=='1')
             {
                 noofone++;
             }
         }
        
         if(noofone==0)
         {
              return s.size()/2;
         }
   
      
        int maxi=0;
         for(int i=0; i<s.length()-1; i++){
             if(s[i]=='0')
             {
                 noofzero++;
             }
              else{
                  noofone--;
              }
              int  score= noofone+noofzero;
               maxi=max(maxi,score);
         }
         return maxi;
        
        
    }
};











// class Solution {
// public:
//     int maxScore(string s) {
//         int rightOnes = 0, leftZeroes = 0;
//         for(char c: s)
//             if(c=='1') rightOnes++;
        
//         int score = 0;
//         for(int i=0; i<s.length()-1; i++){
//             if(s[i]=='0') leftZeroes++;
//             else rightOnes--;
//             score = max(score, leftZeroes + rightOnes);
//         }
//         return score;
//     }
// };