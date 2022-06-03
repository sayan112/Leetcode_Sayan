class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int,int>mp;
         for (auto elem : nums)
         {
             mp[elem]++;
         }
        
         for(auto elem : mp)
         {
             if(elem.second>=2)
             {
                 return elem.first;
             }
         }
         return 1 ; 
        
    }
};