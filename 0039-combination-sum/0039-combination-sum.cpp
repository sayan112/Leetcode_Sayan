class Solution {
public:
    
void generateallsolutions (vector<int>& candidates , int target, int idx ,vector<int>&ds, vector<vector<int>>&ans)
    
{
 
    if(idx==candidates.size())
    {
        if(target==0)
        {
             ans.push_back(ds);
         
        }
            return;
    }
    
    if(target>=candidates[idx])
    {
        ds.push_back(candidates[idx]);
        generateallsolutions(candidates,target-candidates[idx],idx,ds,ans);
        ds.pop_back();
    }
        generateallsolutions(candidates,target,idx+1,ds,ans);
    
    
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx=-0;
         vector<int>ds;
    vector<vector<int>> ans;
         generateallsolutions(candidates,target,idx,ds,ans);
         return ans;
    }
};