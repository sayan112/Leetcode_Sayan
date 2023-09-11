class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
  
         sort(str.begin(),str.end());
         string checkastr=str[0];
        string checkbstr=str[str.size()-1];
         int mini =min(checkastr.size(),checkbstr.size());
        string ans ;
         for(int i=0;i<mini;i++)
         {
             if(checkastr[i]==checkbstr[i])
             {
                 ans+=checkastr[i];
             }
             else{
                  return ans ;
             }
         }
        
         return ans;
    }
};