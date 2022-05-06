class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int k=0;
           vector<vector<int>>vecneed;
 if(nums.size()<3)
     {
          return  vecneed;
     }
    
sort(nums.begin(),nums.end());
bool need=false;

for(int i=0 ; i < nums.size()-2 ; i++)
{
    if(i==0 || (i>0 && (nums[i]!= nums[i-1])  ) )
    {
        int low =i+1;
         int high= nums.size()-1;
         int findsum = k-nums[i];
     while(low<high)
         
     {
     
          if(nums[low]+nums[high]==findsum)
          {
                  vector<int>op;
 op.push_back(nums[i]);
    op.push_back(nums[low]);      
               op.push_back(nums[high]);
               vecneed.push_back(op);
 
 
           while((low<high) && (nums[low]== nums[low+1]))
     {
         low++;
     }
        while((low<high) && (nums[high]== nums[high-1]))
     {
         high--;
     }
     low++;
      high--;
     }
     else if ((nums[low]+nums[high])<findsum )
     {
         low++;
     }
     else {
         high--;
     }
   




    }
    }
    
}
 return vecneed;
  
    }
};