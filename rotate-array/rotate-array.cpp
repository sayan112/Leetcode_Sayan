class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k = k % nums.size();
//              while (k>0)
//         {
//              int lastelem = nums[nums.size()-1];
//              nums.pop_back();
//               nums.insert(nums.begin(),lastelem);

// k--;
//         }
         reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
          

        
           
    }
};