class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   
        set<int>st;
         for(auto elem : nums)
         {
             st.insert(elem);
         }
        nums.clear();
         for(auto elem : st)
         {
             nums.push_back(elem);
         }
         return  nums.size();
        
    }
};