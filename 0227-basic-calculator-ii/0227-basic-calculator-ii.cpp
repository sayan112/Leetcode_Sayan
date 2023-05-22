class Solution {
public:
    int calculate(string s) {
       stack<int>st;
      int len= s.size();
         int currnum =0;
         char op='+';
         for(int i =0;i<len;i++)
         {
              char currchar= s[i];
              if(isdigit(currchar))
              {
                  currnum=(currnum*10)+(currchar-'0');
                  
              }
              if(!isdigit(currchar) && !iswspace(currchar)||i==len-1)
              {
                  if(op=='-')
                  {
                      st.push(-currnum);
                  }
                  else if(op=='+')
                  {
                      st.push(currnum);
                     
                  }
                  else if(op=='*')
                  {
                       int topnum= st.top();
                      st.pop();
                      st.push(topnum*currnum);
                  }
                     else if(op=='/')
                  {
                       int topnum= st.top();
                      st.pop();
                      st.push(topnum/currnum);
                  }
                   op=currchar;
                  currnum=0;
              }
         }
         int ans =0;
         while(st.size()!=0)
         {
             ans+=(st.top());
             st.pop();
         }
         return ans ;
    }
};