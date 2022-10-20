class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       
        int maxi = *max_element(nums.begin(),nums.end());
         int idx=-1;
         int countidx=0;
        for(auto elem : nums)
        {
             countidx++;
             if(elem!=maxi)
             {
                  if(maxi<elem*2)
                  {
                       return -1;
                  }
             }
            else{
                idx=countidx;
            }
           
        }
         return idx-1;
    }
};