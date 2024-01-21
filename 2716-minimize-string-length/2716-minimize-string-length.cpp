class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>mp;
         for(auto elem : s )
         {
              mp[elem]++;
         }
          return mp.size();
    }
};