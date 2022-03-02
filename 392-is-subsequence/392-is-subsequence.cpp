class Solution {
public:
    bool isSubsequence(string s, string t) {
            int i=0;
     int j =0;
      int count =0;
       while (i<s.size() && j<t.size() )
       {
           if(s[i]==t[j])
           {
               i++;
               count++;
           }
           j++;
           /* code */

       }

       if(count==s.size())
       {
           return true;
       }
       else
       {
           return false;
       }
       

    }
};