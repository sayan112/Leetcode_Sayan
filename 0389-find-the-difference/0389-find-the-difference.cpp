class Solution {
public:
    char findTheDifference(string s, string t) {
     
        unordered_map<char,int>mp;
         for(auto elem : s )
         {
              mp[elem]++;
         }
        
          for(auto elem : t )
         {
            if(mp.find(elem)!=mp.end())
            {
                mp[elem]--;
                if(mp[elem]==0)
                {
                     mp.erase(elem);
                }
            }
              else{
                   return elem;
              }
         }
        char ans;
         return ans;
        
    }
};