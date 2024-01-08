class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int zerocount=0;
        
        for(auto elem : nums)
        {
            if(elem==0)
            {
                zerocount++;
            }
        }
        
      vector<int>nonzeroelem;
         for(auto elem : nums)
         {
             if(elem!=0)
             {
                 nonzeroelem.push_back(elem);
             }
         }
        while(zerocount--)
        {
             nonzeroelem.push_back(0);
        }
        nums.clear();
        nums=nonzeroelem;
        
    }
};