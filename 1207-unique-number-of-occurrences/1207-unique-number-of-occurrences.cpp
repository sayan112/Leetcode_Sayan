class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     
         unordered_map<int,int>mp;
         for(auto elem : arr)
         {
            mp[elem]++;
         }
        set<int>st;
         for(auto elem : mp)
         {
             st.insert(elem.second);
         }
         if(st.size()!=mp.size())
         {
             return false;
         }
        return true;
    }
};