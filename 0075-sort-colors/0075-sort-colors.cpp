class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
         int mid=0;
         int high=nums.size()-1;
         while(mid<=high)
         {
             if(nums[mid]==0)// when mid pointing to 0 , swap mid , low , do mid++ , low++
             {
                 swap(nums[mid],nums[low]);
                 mid++;
                 low++;
             }
             else if(nums[mid]==1)// when mid at 1 , just do mid++
             {
                 mid++;
             }
             else{ // when mid at 2 , just do swap mid, high , and high--
                 swap(nums[mid],nums[high]);
                 high--;
             }
         }
         
    }
};