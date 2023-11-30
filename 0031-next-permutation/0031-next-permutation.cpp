class Solution {
public:
    void nextPermutation(vector<int>& nums) {
 //[2,3,0,5,3,2,1]
 //[2,3,1,0,2,3,5]       
        
        
        if(nums.size()==1)
        {
            return;
        }
        else if(nums.size()==2)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
             int idx =-1;
               for(int i =nums.size()-2;i>=0;i--)
               {
                   if(nums[i]<nums[i+1])
                   {
                       idx=i;
                       break;
                   }
               }
             if(idx<0)
             {
                
            reverse(nums.begin(),nums.end());
                 return;
             }
    
             int replaceInt=nums[idx+1];
       
             int replaceidx=-1;
            for(int i=idx+1;i<nums.size();i++)
            {
                if(nums[idx]<nums[i])
                {
                    replaceInt=min(nums[i],replaceInt);
                  
                    if(replaceInt==nums[i])
                    {
                        replaceidx=i;
                    }
                }
            }
           
           swap(nums[idx],nums[replaceidx]);
         reverse(nums.begin()+idx+1,nums.end());
             
        }
         return;
    }
};