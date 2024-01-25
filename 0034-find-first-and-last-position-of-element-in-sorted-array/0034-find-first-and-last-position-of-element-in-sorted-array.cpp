class Solution {
public:
      int firstPosition (vector<int>& nums, int target)
      {
           int start=0;
          int end = nums.size()-1;
           int ans=-1;
           while(end>=start)
           {
                int mid= (end+start)/2;
                if(nums[mid]==target)
                {
                    ans=mid;
                     end=mid-1;
                }
                else if ( nums[mid]>target)
                {
                    end=mid-1;
                }
               else{
                    start=mid+1;
               }
           }
           return ans;
          
      }
          int LastPosition (vector<int>& nums, int target)
      {
           int start=0;
          int end = nums.size()-1;
           int ans=-1;
           while(end>=start)
           {
                int mid= (end+start)/2;
                if(nums[mid]==target)
                {
                    ans=mid;
                     start=mid+1;
                }
                else if ( nums[mid]>target)
                {
                    end=mid-1;
                }
               else{
                    start=mid+1;
               }
           }
           return ans;
          
      }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>ans;
         int firstpos=firstPosition(nums,target);
          int laspos=LastPosition(nums,target);
        ans.push_back(firstpos);
         ans.push_back(laspos);
         return ans;
        
    }
};