class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans ; 
         int n = nums.size();
         for(int i=0; i< nums.size();i++)
         {
             if(nums[i]==target)
             {
                 ans.push_back( i);
                 break;
             }
         }
         reverse(nums.begin(),nums.end());
             for(int i=0; i< nums.size();i++)
         {
             if(nums[i]==target)
             {
                 ans.push_back( abs(i-n)-1);
                 break;
             }
         }
         if(ans.size()==0)
         {
              ans.push_back(-1);
             ans.push_back(-1);
             
         }
        
         return ans ;
    }
};