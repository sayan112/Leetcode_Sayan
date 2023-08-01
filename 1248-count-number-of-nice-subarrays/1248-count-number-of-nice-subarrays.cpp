class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
         for(auto &elem : nums)
         {
              if(elem%2!=0)
              {
                  elem=1;
              }
             else{
                 elem=0;
             }
         }
        unordered_map<int,int>mp;
             mp[0]=1;
             int sum =0;
             int count =0;
             for(auto elem : nums)
             {
                 sum+=elem;
                  count+=mp[sum-k];
                  mp[sum]++;
                 
             }
             return count ;
    }
};