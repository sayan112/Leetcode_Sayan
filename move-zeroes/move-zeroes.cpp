
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int l = 0, r = 0, n = nums.size();
     while(r < n) {
       if (nums[r]!=0) {
         swap(nums[l], nums[r]);
         l++;
       }
       r++;
     }
    }
};

// Dry run with full explanation 
//  r
//  l
//  0 1 0 3  12 

//  if 0 then no swap 
//  only r++
    
//     l r
//     0 1 0 3 12 
    
//      now if non zero elem then swap 
//      l++,r++
     
//       l r  
//     1 0 0 3 12
         
//       if 0 then no swap 
//       only r++
             
//       l   r  
//     1 0 0 3 12 
             
//      now if non zero elem then swap 
//      l++, r++
         
//         l    r
//     1 3 0 0 12 
         
                      
//      now if non zero elem then swap 
//      l++, r++
//          1 3 12 0 0 
         
// now r >n  so condition break ; 

         
         
         
             
         