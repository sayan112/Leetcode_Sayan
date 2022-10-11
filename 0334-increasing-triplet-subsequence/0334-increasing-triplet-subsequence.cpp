class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
     int firstone=INT_MAX;
        int secondone =INT_MAX;
         for(int i =0; i < nums.size();i++)
         {
             
              if(nums[i]>secondone)
              {
                  return true;
              }
             else if(nums[i]>firstone && nums[i]<secondone)
             {
                 secondone=nums[i];
             }
             else if(nums[i]<firstone){
                 firstone=nums[i];
             }
             
             
         }
         return false;
        
        
    }
};