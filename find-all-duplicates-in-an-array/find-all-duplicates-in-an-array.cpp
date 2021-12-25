class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
         for(auto elem: nums)
         {
            mp[elem]++;
         }
         vector<int>p;
         
         for( auto elem : mp)
         {
              if(elem.second==2)
              {
                  p.push_back(elem.first);
              }
         }
         return p;
        
         
    
    
        
        
        
    }
};