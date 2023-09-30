class Solution {
public:
     void generateAllSubsets (vector<int>& nums , int idx,  vector<int>&vec,    vector<vector<int>>&ans)
     {
         if(idx==nums.size())
         {
             ans.push_back(vec);
             return;
         }
         vec.push_back(nums[idx]);
         generateAllSubsets(nums,idx+1,vec,ans);
         vec.pop_back();
            generateAllSubsets(nums,idx+1,vec,ans);
     }
    vector<vector<int>> subsets(vector<int>& nums) {
         int idx =0;
          vector<int>vec;
          vector<vector<int>>ans;
        generateAllSubsets(nums,idx,vec,ans);
         return ans;
    }
};