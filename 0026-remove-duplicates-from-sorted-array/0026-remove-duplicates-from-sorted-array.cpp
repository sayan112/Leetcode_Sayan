class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     set<int>st(nums.begin(),nums.end());
    
        nums.clear();
             for(auto elem: st)
        {
          nums.push_back(elem);
        }
         return nums.size();
    }
};