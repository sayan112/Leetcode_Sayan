class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count2=0;
         int count1=0;
         int count0=0;
       for(auto elem : nums)
       {
            if(elem==2)
            {
                count2++;
            }
           else if (elem==1)
           {
               count1++;
           }
           else {
               count0++;
               
           }
       }
         nums.clear();
         while(count0--)
         {
             nums.push_back(0);
         }
        while(count1--){
            nums.push_back(1);
        }
        
           while(count2--){
            nums.push_back(2);
        }
    }
};