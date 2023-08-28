class Solution {
public:
     void generateAllCombination (vector<int>& candidates , int idx , int target ,     vector<int>ds , vector<vector<int>>&ans  )
     {
         if(idx==candidates.size())
         {
             if(target==0)
             {
                 ans.push_back(ds);
             }
              return ;
         }
          if(target>=candidates[idx])
          {
                 ds.push_back(candidates[idx]);
         target-=candidates[idx];
         generateAllCombination(candidates,idx,target,ds,ans);
         ds.pop_back();
          target+=candidates[idx];
          }
      
         generateAllCombination(candidates,idx+1,target,ds,ans);
         
         
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
         int idx =0;
           vector<vector<int>>ans;
        generateAllCombination(candidates,idx,target,ds,ans);
         return ans ;
    }
};