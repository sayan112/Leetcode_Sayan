class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      for(int i = s.size()/2;i>=1;i--)
      {
          if(s.size()%i==0)
          {
              int times=s.size()/i;
               string pattern = s.substr(0,i);
               string temp="";
              while(times)
              {
                  temp+=pattern;
                   times--;
                  
              }
               if(temp==s)
               {
                    return true;
               }
              
              
          }
      }
         return false;
}
};