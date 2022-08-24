class Solution {
public:
     int digitsum ( int n)
     {
          int sum =0;
         
         while(n)
         {
             int c=n%10;
             sum+=c;
             n=n/10;
             
         }
          return sum ; 
     }
    int maximumSum(vector<int>& nums) {
        
         sort(nums.begin(),nums.end(),greater<int>());
        unordered_map<int,int>mp;
//          for (auto elem : nums)
//          {
//            int need =  digitsum(elem);
             
//              cout << need<<" ";
             
//          }
         int maxi =-1;
         for (int i =0; i < nums.size();i++)
         {
             
              int need = digitsum(nums[i]);
             if(mp.find(need)!=mp.end())
             {
                 maxi= max(maxi,mp[need]+nums[i]) ;
             }
             else{
                 mp[need]=nums[i];
             }
         }
        return maxi;
    }
};