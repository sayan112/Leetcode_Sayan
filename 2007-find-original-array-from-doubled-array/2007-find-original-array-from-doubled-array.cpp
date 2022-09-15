class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &vec)
        {
            vector<int> need;
             unordered_map<int,int>mp;
        if(vec.size()%2==1)
        {
             return {};
        }
             
            for(auto elem : vec)
            {
                mp[elem]++;
            }
            

        sort(vec.begin(),vec.end());
             
            for(int i =0; i < vec.size();i++)
            {
                 if(mp[vec[i]]==0)
                 {
                     continue;
                 }
                
                if(mp.find(vec[i]*2)!=mp.end())
                {
                     if(  mp[vec[i]*2]==0)
                     {
                          return {};
                     }
                    need.push_back(vec[i]);
                    
                    mp[vec[i]*2]--;
                    mp[vec[i]]--;
                    
                }
                else{
                    return {};
                }
            }
             return need;
            
            
        }
};