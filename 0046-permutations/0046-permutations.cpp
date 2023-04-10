class Solution {
public:
     void generateallPermutations (vector<int>& nums , int idx ,  vector<vector<int>>&ds )
     {
         
          if(idx>=nums.size())
          {
               ds.push_back(nums);
               return ;
          }
          for(int i=idx; i < nums.size();i++)
          {
               swap(nums[idx],nums[i]);
              generateallPermutations(nums,idx+1,ds);
                swap(nums[idx],nums[i]);
          }
     }
    vector<vector<int>> permute(vector<int>& nums) {
          vector<vector<int>>ds;
         int idx =0;
         generateallPermutations(nums,idx,ds);
         return ds;
    }
};