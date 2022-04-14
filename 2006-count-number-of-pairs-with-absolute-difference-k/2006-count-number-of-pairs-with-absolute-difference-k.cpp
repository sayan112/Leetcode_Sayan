class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans =0;
         for(auto elem : nums)
         {
             if(mp[elem+k])
             {
                 ans+=mp[elem+k];
             }
              if(mp[elem-k])
             {
                 ans+=mp[elem-k];
             }
             mp[elem]++;
            
         }
         return ans;
        
        
        
        
    }
};