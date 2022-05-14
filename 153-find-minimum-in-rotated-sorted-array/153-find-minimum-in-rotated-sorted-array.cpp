class Solution {
public:
    int findMin(vector<int>& nums) {
        int start =0;
        int size= nums.size();
         int end =nums.size()-1;
         if(nums[end]>=nums[start])
         {
              return nums[0];
         }
        else{
             while(end>=start)
             {
                 int mid = (end+start)/2;
                 int prev = (mid+nums.size()-1)%size;
                  int next = (mid+1) %size;
                  if(nums[mid]<=nums[prev] && nums[mid]<=nums[next] )
                  {
                       return nums[mid];
                  }
                 else if( nums[mid]>nums[end] )
                 {
                     start= mid+1;
                     
                 }
                 else{
                      end = mid;
                 }
             }
        }
         return -1;
         
        
        
        
        
        
    }
};