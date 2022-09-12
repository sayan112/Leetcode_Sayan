class Solution {
public:
    int partitionString(string s) {
    
        unordered_map<char,int>mp;
         int ans =0;
        for(int i =0; i < s.size();i++)
        {
             if(mp.find(s[i])==mp.end())
             {
                  mp[s[i]]++;
             }
            else{
                mp.clear();
                ans++;
                i--;
            }
        }
         return ans+1;
            
    }
};