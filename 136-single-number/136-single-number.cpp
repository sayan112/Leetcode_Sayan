class Solution {
public:
    int singleNumber(vector<int>& nums) {
      unordered_map<int,int>mp;
         for(auto elem: nums)
         {
             mp[elem]++;
         }
        
               for(auto elem: mp)
         {
             if(elem.second==1)
             {
                  return elem.first;
             }
         }
         return 0;
         
    }
};