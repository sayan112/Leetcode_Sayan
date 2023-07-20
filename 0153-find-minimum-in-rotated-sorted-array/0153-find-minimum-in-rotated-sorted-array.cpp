class Solution
{
    public:
        int findMin(vector<int> &nums)
        {
            
             if ( nums [0] <= nums[nums.size()-1])
             {
                  return nums[0];
             }
            
             int  start =0;
             int   end = nums.size()-1;
             int size = nums.size();
              
             while(end>=start )
             {
                  int mid = (start + end)/2; 
                  int prev = (mid+nums.size()-1)%size;
                  int next = (mid+1)%size;
                  if( (nums[mid]<nums[prev] ) &&(nums[mid]<nums[next] ) )
                  {
                      return nums[mid];
                  }
                  else if (nums[mid]> nums[end])
                  {
                      start =mid+1;
                  }
                 else{
                      end = mid-1;
                 }
             }
             return -1;
        }
};