// class Solution {
//     public : int findUnsortedSubarray(int[] nums) {
//         int end = -1;
//         int max = nums[0];
//         for(int i = 1; i < nums.length; i++){
//             if(max > nums[i]){ // the left value is greater then current value
//                 end = i; // mark that index with end
//             }
//             else{
//                 max = nums[i];
//             }
//         }
        
//         int start = 0;
//         int min = nums[nums.length - 1];
//         for(int i = nums.length - 2; i >= 0; i--){
//             if(min < nums[i]){ // the right value is smaller then current value
//                 start = i; // mark that index with start
//             }
//             else{
//                 min = nums[i];
//             }
//         }
//         return end - start + 1;
//     }
// }
// From constraints of the problem -10^5 <= nums[i] <= 10^5
# define MAX_VAL 100001
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int start=-1,end=n;        
        // Since, the array needs to be in ascending order.
        
        // PASS 1
        // Iterate from the end, and check weather the element at index "i" is the current minimum element or not. If not then "i" is the starting index.
        int curr_min=MAX_VAL;
        for(int i = n - 1; i>=0; i--) {
            if(curr_min > nums[i]) curr_min = nums[i];
            
            if(nums[i] > curr_min) start = i;
        }
        
        // PASS 2
        // Iterate from the start, and check weather the element at index "i" is the current maximum element or not. If not then "i" is the ending index.
        int cur_max = -MAX_VAL;
        for(int i=0; i<n; i++) {
            if(cur_max < nums[i]) cur_max = nums[i];
            
            if(nums[i] < cur_max) end = i;
        }
        
        // if no starting index found, that means the array is already sorted in ascending order
        if(start==-1){ 
            return 0;
        }
        return end-start+1; // number of elements between start and end index
    }
};