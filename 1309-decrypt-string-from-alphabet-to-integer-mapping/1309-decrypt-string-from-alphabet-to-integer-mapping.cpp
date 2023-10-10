class Solution {
public:
    string freqAlphabets(string s) {
     
         // cout << char(stoi("10")+'a'-1);
         string ans ;
        int i=0;
         while(i<s.size())
         {
             if(i+2<s.size() && s[i+2]=='#')
             {
                 string need =s.substr(i,2);
                 ans+=char(stoi(need)+'a'-1);
                 i+=3;
             }
             else{
              
             ans+= char(s[i]-'0'+'a'-1);
                 i++;
             }
         }
        
        
         return ans;
    }
};