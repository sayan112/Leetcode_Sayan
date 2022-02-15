class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xori =0 ; 
             for (int i = 0; i < nums.size() ; i++)
     {
          xori= xori^ nums[i] ; 
     
     }
        return xori ;
    }
};