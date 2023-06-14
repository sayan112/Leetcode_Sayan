class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
          int maxi   = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        
         cout << maxi <<" "<< mini ;
         for(auto elem : nums )
         {
              if(elem != maxi && elem != mini )
              {
                  return elem ;
                  
              }
         }
         return -1;
         
    }
};