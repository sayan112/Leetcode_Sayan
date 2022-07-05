class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
             return 0;
        }
     sort(nums.begin(),nums.end());
         int start=nums[0];
         int maxi=0;
        for(int i =1; i < nums.size();i++)
        {
            int check = nums[i]-nums[i-1];
             if(check==1)
             {
                 int need=  nums[i]- start ;
                   maxi= max(maxi,need);
             }
            if(check>1)
            {
               
              
             start = nums[i];   
            }
          
             
        }
         return maxi+1;
        
    }
};