class Solution
{
    public:

        void need(vector<int> &candidates, int target, int idx, vector<int> &ansvec, vector< vector< int>> &ans) {
            if(idx==candidates.size())
            {
                if(target==0)
                {
                     ans.push_back(ansvec);
              
                }     
                return ; 
            }
            
            if(target>=candidates[idx])
            {
               ansvec.push_back(candidates[idx]);
                
                  need(candidates, target-candidates[idx], idx, ansvec,ans);
                    ansvec.pop_back();
            }
         
           
            
            need(candidates, target, idx+1, ansvec, ans);
            
            
        }
    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<int> ansvec;
        vector<vector < int>> ans;
        int idx = 0;
        need(candidates, target, idx,  ansvec, ans);
         return ans;
    }
};