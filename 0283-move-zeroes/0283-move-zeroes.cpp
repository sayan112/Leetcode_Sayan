class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
         int zero=0;
             vector<int>ans;
         for(auto elem : nums)
         {
              if(elem==0)
              {
                  zero++;
              }
             else{
                 ans.push_back(elem);
             }
         }
 while(zero--)
 {
     ans.push_back(0);
 }
         int idx =0;
         for(auto &elem : nums)
         {
             elem=ans[idx];
             idx++;
         }
     
    }
};