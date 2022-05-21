class Solution {
public:
    int findMin(vector<int>& nums) {
         
            
             int  start =0;
             int   end = nums.size()-1;
             int size = nums.size();
        
         while (nums[end] == nums[start] && end > start) {
            end--;
        }
        
              
             while(end>start )
             {
                
                   if (nums[start] < nums[end]) {
                return nums[start];
            }
            
            int mid = start + (end - start) / 2;
                 
                   if (nums[mid]>= nums[start])
                  {
                      start =mid+1;
                  }
                 else{
                      end = mid;
                 }
             }
             return nums[start];
        }
    
};