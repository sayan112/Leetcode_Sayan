class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
         for(int i =shifts.size()-2; i>=0;i--)
         {
             shifts[i]+=shifts[i+1]%26;
         }
   
        
         for(int i =0; i<shifts.size();i++)
         {
             
             
               s[i]= char(((s[i]-'a')+shifts[i]%26)%26+'a');
                 
              
              }
             cout <<endl;
         
         
         return s;
    }
};