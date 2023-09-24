class Solution {
public:
  int    firstOccurence (vector<int>& nums, int target)
  {
       int firstidx=-1;
      int start=0;
       int end =nums.size()-1;
       while(end>=start)
       {
           int mid =(start+end)/2;
           if(nums[mid]==target)
           {
               firstidx=mid;
        end=mid-1;
           }
           else if(nums[mid]>target)
           {
               end=mid-1;
           }else{
               start=mid+1;
           }
       }
            return firstidx;
  }
     int  lastOccurence   (vector<int>& nums, int target)
  {
       int lastidx=-1;
      int start=0;
       int end =nums.size()-1;
       while(end>=start)
       {
           int mid =(start+end)/2;
           if(nums[mid]==target)
           {
               lastidx=mid;
            start=mid+1;
           }
           else if(nums[mid]>target)
           {
               end=mid-1;
           }else{
               start=mid+1;
           }
       }
            return lastidx;
  }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>ans;
        int firstposition= firstOccurence(nums,target);
                int lastposition= lastOccurence(nums,target);
      ans.push_back(firstposition);
           ans.push_back(lastposition);
         return ans;
    }
};