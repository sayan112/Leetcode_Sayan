class Solution {
public:
    int search(vector<int>& nums, int target) {
      int count =0;
         for(auto elem : nums)
         {
             if(elem!=target)
             {
                 count++;
             }
             else{
                 break;
             }
         }
        cout << count <<nums.size();
         if(count==nums.size())
         {
              return -1;
         }
         return count;
        
        
        
    }
};