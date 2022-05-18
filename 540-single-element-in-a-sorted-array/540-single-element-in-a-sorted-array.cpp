class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
             return nums[0];
        }
    
        int low =0;
        int high = nums.size()-1;
         if(nums[0]!=nums[1])
         {
              return nums[0];
         }
        else if (nums[high]!=nums[high-1] )
        {
             return nums[high];
        }
        
        while(low<=high)
        {
             int mid = (low+high)/2;
            
            if((nums[mid ]!= nums[mid-1]) && (nums[mid+1]!=nums[mid]))
            {
                return nums [mid];
            }
              if ( ((mid%2)==0 && (nums[mid]==nums[mid+1])) ||((mid%2!=0) && (nums[mid]==nums[mid-1]))  )
             {
                 low= mid+1;
             }
            else{
                high = mid-1;
            }
        }
         return -1;
    
    }
};