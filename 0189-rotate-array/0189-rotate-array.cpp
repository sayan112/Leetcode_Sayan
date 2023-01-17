class Solution {
public:
     void rev ( int start , int end , vector<int>&nums )
     {
         while(end>=start)
         {
             swap(nums[end],nums[start]);
             end--;
              start++;
         }
         
     }
    void rotate(vector<int>& nums, int k) {
         int sk= k%nums.size();
        if(nums.size()!=1 && nums.size()>sk)
        {
               reverse(nums.begin(),nums.end());
           rev(0,sk-1,nums);
        rev(sk,nums.size()-1,nums);
        }
       
      
        
    }
};