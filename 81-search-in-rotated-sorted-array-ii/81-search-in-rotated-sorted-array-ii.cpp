class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(auto elem:nums)
        {
            if(elem==target)
            {
                return true;
            }
            
        }
        return false;
    }
};