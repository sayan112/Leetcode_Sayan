class Solution {
public:
    string reverseWords(string s) {
        
         vector<string>vec;
         string op;
         for(int i =0; i < s.size();i++)
         {
             
             if(s[i]==' '|| i==s.size()-1)
             {
                  if(i==s.size()-1)
                  {
                      op+=s[i];
                        vec.push_back(op);
                       break;
                      
                  }
                 vec.push_back(op);
                 op="";
                 
             }
             else{
                  op+=s[i];
             }
         }
        
       
         string ans;
         for(auto elem : vec)
         {
             string op=elem;
              reverse(op.begin(),op.end());
            for(int i =0;i<op.size();i++)
            {
                ans+=op[i];
            }
             ans+=' ';
            
         }
         ans.pop_back();
         return ans;
    }
};