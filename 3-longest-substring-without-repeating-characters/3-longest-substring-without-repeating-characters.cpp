class Solution {
public:
    int lengthOfLongestSubstring(string s) {
          int i=0;
     int j=0;
     unordered_map<char,int>mp;
     int count =0;
  

while(j<s.size())
{
     mp[s[j]]++;
     
     if(mp.size()==j-i+1)
     {
       count=max(count, j-i+1);
     }
 
     else if(mp.size()<j-i+1)
     {
         while (mp.size()<j-i+1)
         {
              mp[s[i]]--;
               if(mp[s[i]]==0)
               {
                   mp.erase(s[i]);
               }
                 i++;
         }
       
      
         
     }
     j++;

}
 return count ;

    }
};