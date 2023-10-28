class Solution {
public:
    void sortColors(vector<int>& nums) {
     
         vector<int>ans;
        for(auto elem : nums)
        {
            if(elem==0)
            {
                ans.push_back(elem);
            }
        }
          for(auto elem : nums)
        {
            if(elem==1)
            {
                ans.push_back(elem);
            }
        }
          for(auto elem : nums)
        {
            if(elem==2)
            {
                ans.push_back(elem);
            }
        }
        nums.clear();
          for(auto elem : ans)
        {
              
                nums.push_back(elem);
            
        }
    }
};