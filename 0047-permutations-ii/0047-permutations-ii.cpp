class Solution {
private:
    void solve(vector<int>nums, int ind, vector<vector<int>>&ans){
        //BASE_CASE
        if(ind==nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[ind]==nums[i])continue; // to avoid duplicate
            swap(nums[i],nums[ind]);
            solve(nums,ind+1,ans);
           
        }
        
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int ind=0;
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        solve(nums,ind,ans);
        
        return ans;
    }
};