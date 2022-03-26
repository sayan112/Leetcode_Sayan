class Solution {
public:
    int search(vector<int>& nums, int target) {
int start =0;
        int end =nums.size();
         if(nums.size()==1)
         {
             if(nums[0]!=target)
             {
                  return -1;
             }
             else{
                 return 0;
             }
                 
         }
         while(start<=end)
         {
            int middle= end+(start-end )/2;
             if(nums[middle]==target)
             {
                 return middle;
             }
             else if(nums[middle]>target){
                 end=middle-1;
                 
             }
             else{
                 start=middle+1;
             }
           
         }
        return -1;
        
    }
};