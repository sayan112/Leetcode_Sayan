class Solution {
public:
    void   allsubset(vector<int>& nums,int idx,vector<vector<int>>&ans, vector<int>&vec)
      {
         ans.push_back(vec);
         
         for(int i=idx; i < nums.size();i++)
         {
              if(i>idx && nums[i]==nums[i-1])
              {
                  continue;
              }
              vec.push_back(nums[i]);
               allsubset(nums,i+1,ans,vec);
             vec.pop_back();
             
             
         }
         return ;
        
        
      }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        
          vector<vector<int>>ans ; vector<int>vec;
         sort(nums.begin(),nums.end());
         allsubset(nums,0,ans,vec);
         return ans ; 
        
    }
};