class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
         for(int i=1;i<nums.size();i+=3)
         {
             int prev=nums[i-1];
             int mid=nums[i];
             int next=nums[i+1];
              if(next-prev<=k)
              {
                  ans.push_back({prev,mid,next});
              }
             else{
                 return {};
             }
         } 
        return ans;
    }
};