class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 =0;
         int count1=0;
         int count2=0;
     for(auto elem : nums)
     {
          if(elem==0)
          {
              count0++; 
          }else if(elem==1)
          {
              count1++;
          }
         else{
              count2++;
         }
     }
         nums.clear();
        while(count0--)
        {
            nums.push_back(0);
        }
            while(count1--)
        {
            nums.push_back(1);
        }
            while(count2--)
        {
            nums.push_back(2);
        }
    }
};