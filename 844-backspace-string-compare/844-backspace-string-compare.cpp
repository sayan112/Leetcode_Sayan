class Solution {
public:
    bool backspaceCompare(string s, string t) {
            stack<char>sneed,tneed;
         for (int i = 0; i < s.size(); i++)
         {
           if(s[i]=='#')
           {
                if(sneed.empty())
                {
 continue;
                }
               sneed.pop();
           }   
           else
           {
                sneed.push(s[i]);
           }
           
         }


             for (int i = 0; i < t.size(); i++)
         {
           if(t[i]=='#')
           {
                if(tneed.empty())
                {
 continue;
                }
               tneed.pop();
           }   
           else
           {
                tneed.push(t[i]);
           }
           
         }
          if(sneed==tneed)
          {
              return true;
          }
          else
          {
          return false;
       
          
           
    }
    }
};