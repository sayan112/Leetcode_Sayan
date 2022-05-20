class Solution {
public:
     bool issorted (vector<int>num)
     {
         vector<int>sortneed=num;
          sort(sortneed.begin(),sortneed.end());
          if(sortneed==num)
          {
               return true;
          }
         else{
              return false;
         }
     }
    int findPeakElement(vector<int>& nums) {
         int n = nums.size();
           if (issorted(nums))
           {
                return nums.size()-1;
           }
        
         for (int i =1; i < n-1;i++ )
         {
             if((nums[i]>nums[i-1]) && (nums[i]>nums[i+1]))
             {
                 return i ;
             }
         }
         return 0;
        
        
    }
};