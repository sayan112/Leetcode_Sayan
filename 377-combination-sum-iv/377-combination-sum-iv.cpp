class Solution {
public:
     int need (vector<int>& nums, int n , int target,int sum , unordered_map<string,int>&mp  )
     {
          if( sum > target  )
          {
                return 0;
          }
          if( sum == target)
          {
               return 1 ; 
          }
               string currentKey = to_string(n) + "_" + to_string(sum);
          if(mp.find(currentKey)!= mp.end())
          {
               return   mp[currentKey];
          }
         
         int x =0;
    
            for(int i =0 ; i<nums.size(); i++)
            {
             x+=   need ( nums, n+i ,  target, sum+nums[i],mp);
            }
         
          mp[currentKey]=x;
          return   mp[currentKey]  ; 
     }
    int combinationSum4(vector<int>& nums, int target) {
        
         int sum =0;
         unordered_map<string,int>mp;
        
        
      int count=   need( nums,0 , target, sum,mp ); 
        return count ;
    }
};