class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
         int n = nums.size()/3;
         unordered_map<int,int>mp;
        
        for(auto elem : nums )
        {
            mp[elem]++;
        }
        vector<int>ans ; 
         for(auto elem : mp)
         {
              if(elem.second>n)
              {
                 ans.push_back(elem.first) ;
              }
         }
         return ans ; 
    }
};