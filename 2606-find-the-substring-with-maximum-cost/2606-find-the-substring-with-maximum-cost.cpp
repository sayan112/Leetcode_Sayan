class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int>mp;
         for(int i =0; i<chars.size();i++)
         {
             mp[chars[i]]=vals[i];
         }
       
         
         for(auto elem :s)
         {
              if(mp.find(elem)==mp.end())
              {
                        mp[elem]=elem-'a'+1;
              }
       
         }
         int maxi =0;
         int cur =0;
         for(auto elem : s)
         {
              
              cur= max(mp[elem],mp[elem]+cur);
             maxi=max(maxi,cur);
         }
        return maxi;
    }
};