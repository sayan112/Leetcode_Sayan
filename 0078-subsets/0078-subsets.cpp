class Solution {
public:
     void storeallsubsets(vector<int>& nums, int idx , vector<int>&ds, vector<vector<int>>&ans)
     {
          if(idx==nums.size())
          {
               ans.push_back(ds);
               return ;
          }
          ds.push_back(nums[idx]);
                 storeallsubsets(nums,idx+1,ds,ans);
         ds.pop_back();
                 storeallsubsets(nums,idx+1,ds,ans);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
        int idx =0;
             vector<vector<int>>ans;
         vector<int>ds;
        storeallsubsets(nums,idx,ds,ans);
         return ans ;
    }
};