class Solution {
public:
    int thirdMax(vector<int>& nums) {
         unordered_set<int>st;
         for(auto elem : nums)
         {
             st.insert(elem);
         }
        nums.clear();
         
        for(auto elem : st)
        {
          nums.push_back(elem);
            
        }
        
           sort(nums.begin(),nums.end());
        if(nums.size()<3)
        {
               return nums[nums.size()-1];
            
        }
        for(auto elem : nums)
        {
            cout << elem << " ";  
        }
    
      
         return nums[nums.size()-3];
    }
};