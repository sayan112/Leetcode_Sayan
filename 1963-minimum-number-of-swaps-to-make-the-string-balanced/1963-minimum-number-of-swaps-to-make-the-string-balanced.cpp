class Solution {
public:
    int minSwaps(string s) {
      stack<char>st;
         for(auto elem : s)
         {
             if(elem=='[')
             {
                 st.push(elem);
             }
             else{
                 if(st.size()&&st.top()=='[')
                 {
                     st.pop();
                 }
                 else{
                          st.push(elem);
                     
                 }
             }
         }
          int ans = (int) std::ceil(st.size() / 4.0);
         return ans;
    }
};