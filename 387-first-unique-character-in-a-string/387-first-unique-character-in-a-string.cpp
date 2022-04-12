class Solution {
public:
    int firstUniqChar(string s) {
        
         for(int i=0; i <s.size();i++)
         {
             bool need=true;
                for(int j=0; j <s.size();j++)
         {
             if(i!=j)
             {
                 if(s[i]==s[j])
                 {
                     need=false;
                     break;
                 }
             }
         }
              if(need)
              {
               return i;   
              }
         }
         return -1;
    }
};