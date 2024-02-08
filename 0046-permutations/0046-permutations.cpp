class Solution {
public:
     void permutaion ( vector<int>&nums ,   vector<vector<int>>&ans , int i  )
     {
          if(i==nums.size()-1)
          {
               ans.push_back(nums);
               return ;
          }
         for(int j=i;j<nums.size();j++)
         {
             swap(nums[j],nums[i]);
              permutaion ( nums , ans  , i+1);
                swap(nums[j],nums[i]);
         }
         
     }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int  idx =0;
         permutaion ( nums , ans  , idx);
         return ans;
    }
};