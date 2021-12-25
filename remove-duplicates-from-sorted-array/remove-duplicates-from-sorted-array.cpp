class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>l;
       for(auto elem : nums)
       {
           l.insert(elem);
       }
            nums.clear();
        
      for(auto elem : l)
      {
       nums.push_back(elem);
      }
        
  return l.size();
        
    }
};