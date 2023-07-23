class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
             vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
         for(auto elem : strs)
         {
              string need =elem;
             sort(need.begin(),need.end());
              mp[need].push_back(elem);
            
         }
         for(auto elem : mp)
         {
           vector<string>needvec;
              for(auto elem1: elem.second)
              {
              needvec.push_back(elem1);
              }
             ans.push_back(needvec);
         }
         return ans ;
    }
};