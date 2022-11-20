class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         vector<int>need=nums;
        sort(need.begin(),need.end());
      
         int store=nums.size()-1;
         for(int i =1;i<nums.size();i+=2 )
         {
             nums[i]=need[store];
              store--;
         }
         for(int i =0;i<nums.size();i+=2 )
         {
             nums[i]=need[store];
              store--;
         }

         
    }
};