class Solution
{
    public:
        vector<vector < int>> ans;
    void combination(vector<int> &candidates, int idx, int target, vector<int> &vec)

    {
         if (idx >= candidates.size())
        {
            
            return;
        }
         if(target<0)
         {
              return ; 
         }
        if(target==0)
        {
             for (auto elem : vec)
             {
                  cout << elem <<" ";
             }
            cout <<endl;
            ans.push_back(vec);
             return ; 
            
        }
        
            vec.push_back(candidates[idx]);
            combination(candidates, idx, target - candidates[idx], vec);
            vec.pop_back();
        

        combination(candidates, idx + 1, target, vec);
    }

    vector<vector < int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<int> vec;
        int idx = 0;
        combination(candidates, idx, target, vec);
        return ans;
    }
};