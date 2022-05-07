class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         // But here we are taking extra space but we dont do it in interview :)
        
//         set<int>l;
//        for(auto elem : nums)
//        {
//            l.insert(elem);
//        }
//             nums.clear();
        
//       for(auto elem : l)
//       {
//        nums.push_back(elem);
//       }
        
//   return l.size();
        
         int slow =0;
         int fast =1;
         while(fast<nums.size())
         {
              if(nums[fast]!=nums[slow])
              {
                  slow++;
                   nums[slow]=nums[fast];
              }
             fast++;
         }
         return slow+1;
        
    }
};