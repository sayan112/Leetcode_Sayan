class Solution {
public:
    bool isAnagram(string s, string t) {
            unordered_map<char,int>mp;
        if(s.size()!=t.size())
        {
            return false;
        }
        else{
        
             for(auto elem : s)
             {
                 mp[elem]++;
             }
         
             for(auto elem : t)
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
                      return false;
                 }
             }
        }
        if(mp.size()==0)
        {
            return true;
        }
        return false;
    }
};