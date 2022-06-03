class Solution {
public:
    void sortColors(vector<int>& nums) {
        
         vector<int>need;
         for(auto elem : nums)
         {
              if(elem==0)
              {
                   need.push_back(elem);
              }
         }
           for(auto elem : nums)
         {
              if(elem==1)
              {
                   need.push_back(elem);
              }
         }
        
           for(auto elem : nums)
         {
              if(elem==2)
              {
                   need.push_back(elem);
              }
         }
        
      nums.clear();
         nums=need;
        
    }
};