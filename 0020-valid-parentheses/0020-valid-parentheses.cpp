class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
         for(auto elem : s )
         {
              if(elem=='('|| elem=='['||elem=='{')
              {
                  st.push(elem);
              }
             else{
                  if(st.size())
                  {
                       auto topelem = st.top();
                       st.pop();
                  if((topelem=='('&&elem==')')||(topelem=='['&&elem==']')||(topelem=='{'&&elem=='}'))
                  {
                     
                    continue;
                  }
                 else{
                     return false;
                 }
                  }
                 else{
                      return false;
                 }
                
             }
         }
      
        if(st.empty())
         {
             return true;
         }
         return false;
    }
};