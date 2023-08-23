class Solution {
public:
    int minAddToMakeValid(string s) {
         stack<char>st;
         
        for(auto elem : s)
        {
            if(elem=='(')
            {
                st.push(elem);
            }
            else{
                 if(st.size()&&st.top()=='(')
                 {
                     st.pop();
                 }
                else{
                    st.push(elem);
                }
            }
        }
         return st.size();
    }
};