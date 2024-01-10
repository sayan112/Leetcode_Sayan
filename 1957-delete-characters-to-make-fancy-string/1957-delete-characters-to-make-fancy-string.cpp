class Solution {
public:
    string makeFancyString(string s) {
      string cpy=s;
         int count =1;
         for(int i=0;i<s.size();i++)
         {
             if(i!=0&& s[i]==s[i-1])
             {
                 count++;
             }
             else{
                 if(i==0)
                 {
                     continue;
                 }
                 if(s[i]!=s[i-1])
                 {
                     count=1;
                 }
             }
             if(count>=3)
             {
                 cpy[i]='1';
             }
         }
        string ans;
         for(auto elem : cpy)
             
         {
             if(elem!='1')
             {
                 ans+=elem;
             }
         }
        return ans;
    
    }
};