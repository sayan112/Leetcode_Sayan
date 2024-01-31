class Solution {
public:
    string removeOuterParentheses(string s) {
     string ans ="";
        int count =0;
         for(auto elem : s)
         {
              if(elem=='(' && count==0)
              {
                  count++;
              }
              else if(elem=='(' && count>=1)
              {
                   ans+=elem;
                  count++;
              }
              else if(elem==')' && count==1)
              {
                  count--;
              }
              else if(elem==')' && count>1)
              {
                   ans+=elem;
                  count--;
              }
             
         }
        return ans;
    }
};