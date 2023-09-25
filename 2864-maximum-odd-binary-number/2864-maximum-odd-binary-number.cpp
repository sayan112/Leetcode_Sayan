class Solution {
public:
    string maximumOddBinaryNumber(string s) {
  
         int countone =0;
         string ans ;
      for(auto elem : s )
      {
           if(elem=='1')
           {
               countone++;
           }
        ans+='0';
          
      }
         for(int i=0;i<countone-1;i++)
         {
             ans[i]='1';
         }
        
        ans[ans.size()-1]='1';
         return ans ;
    }
};