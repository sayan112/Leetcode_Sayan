class Solution {
public:
    bool isGood(vector<int>& nums) {
     
         int n = *max_element(nums.begin(),nums.end());
        unordered_map<int,int>mp;
         for(int i=1;i<=n;i++)
         {
             mp[i]++;
             if(i==n)
             {
                 mp[i]++;  
             }
         }
         for(auto elem : mp)
         {
             cout << elem.first <<" "<<elem.second<<endl;
         }
       
         for(auto elem : nums)
         {
             if(mp.find(elem)!=mp.end())
             {
                 mp[elem]--;
                  if(mp[elem]==0)
                  {
                      mp.erase(elem);
                  }
             }
             else{
                 return false;
             }
         }
        cout << mp.size()<<endl;
         return !mp.size();
    }
};