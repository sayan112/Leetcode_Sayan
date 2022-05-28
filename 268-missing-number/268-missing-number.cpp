class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>mp;
         for (auto elem :nums)
             
         {
             mp[elem]++;
         }
     
        
         for (int i=0; i<=n;i++)
         {
              if(mp.find(i)==mp.end())
              {
                  return i;
              }
             
         }
         return 0;
        
        
        
    }
};