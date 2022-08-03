class Solution {
public:
    int numRabbits(vector<int>& answers) {
      unordered_map<int,int>mp;
        for(auto elem : answers)
        {
            mp[elem]++;
        }
        
     

            int ans =0;
        
            for(auto elem : mp)
            {
              int numberof_grps=elem.first+1;
                            int earchgrpmembers= ceil(elem.second*1.0 / numberof_grps*1.0);
        ans+= numberof_grps* earchgrpmembers;   
            }
        
        return ans ;
    
    }
    
};