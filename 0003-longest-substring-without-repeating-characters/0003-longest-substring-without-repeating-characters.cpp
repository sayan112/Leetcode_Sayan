class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
        int j =0;
         int ans =0;
         unordered_map<char,int>mp;
        
         while(j<s.size())
         {
             mp[s[j]]++;
              if(j-i+1<mp.size())
              {
                  j++;
              }
             else if(j-i+1==mp.size())
             {
                 ans=max(ans,j-i+1);
                 j++;
             }
             else {
                 while(j-i+1>mp.size())
                 {
                     mp[s[i]]--;
                     if(mp[s[i]]==0)
                     {
                         mp.erase(s[i]);
                     }
                     i++;
                 }
                 j++;
             }
             
             
              
         }
         return ans ;
    }
};