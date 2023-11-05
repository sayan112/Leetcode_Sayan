class Solution {
public:
     int searchStartidx (vector<int>&nums,int target)
     {
         int start =0;
          int end = nums.size()-1;
         int ansidx=-1;
          while(end>=start)
          {
               int mid = start+(end-start)/2;
               if(target==nums[mid])
               {
                   ansidx=mid;
                   end = mid-1;
               }
              else if (target>nums[mid])
              {
                start=mid+1;   
              }
              else{
                  end=mid-1;
              }
          }
          return ansidx;
     }
    
         int searchEndidx (vector<int>&nums,int target)
     {
         int start =0;
          int end = nums.size()-1;
         int ansidx=-1;
          while(end>=start)
          {
               int mid = start+(end-start)/2;
               if(target==nums[mid])
               {
                   ansidx=mid;
  start=mid+1; 
               }
              else if (target>nums[mid])
              {
                start=mid+1;   
              }
              else{
                  end=mid-1;
              }
          }
          return ansidx;
     }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>ans;
        int startingIdx = searchStartidx(nums,target);
            int endingidx = searchEndidx(nums,target);
ans.push_back(startingIdx);
        
ans.push_back(endingidx);
         return ans;
    }
};