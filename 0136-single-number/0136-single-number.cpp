class Solution {
public:
    int singleNumber(vector<int>& nums) {
         set<int>st(nums.begin(),nums.end());
         int sum1=0;
        for(auto elem : st)
        {
        sum1+=(elem+elem);
        }
        int sum2=0;
        for(auto elem : nums)
        {
            sum2+=elem;
        }
         return sum1-sum2;
    }
};