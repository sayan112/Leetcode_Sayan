class Solution {
public:
    void sortColors(vector<int>& nums) {
         int zerocount=0;
         int onecount=0;
         int twocount=0;
      for(auto elem : nums)
      {
          if(elem==0)
          {
              zerocount++;
          }
          else if(elem==1)
          {
              onecount++;
          }
          else{
              twocount++;
          }
      }
         nums.clear();
         while(zerocount--)
         {
             nums.push_back(0);
         }
                 while(onecount--)
         {
             nums.push_back(1);
         }
                 while(twocount--)
         {
             nums.push_back(2);
         }
        
    }
};