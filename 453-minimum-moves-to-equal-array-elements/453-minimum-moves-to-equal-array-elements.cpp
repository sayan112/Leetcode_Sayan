class Solution {
public:
    int minMoves(vector<int>& nums) {
               
//   long maxi =*max_element(nums.begin(),nums.end());
//            int mini =*min_element(nums.begin(),nums.end());
//           int ansb=0;
//          if(nums.size()==2)
//          {
//               if(nums[1]!=nums[0])
//               {
//                    return (maxi-mini);
//               }
//          }
       
    

//         int count =0;
        
//          while( maxi-mini!=0)
//          {
//              count++;
//               int need= maxi-mini;
//              int ct=0;
//                for(int i=0; i < nums.size();i++)
//                {
//                     if(maxi!=nums[i] && ct==0)
//                     {
//                            nums[i]++;
//                         ct++;
//                     }
                 
                    
//                }
//               maxi= *max_element(nums.begin(),nums.end());
//               mini =*min_element(nums.begin(),nums.end());
             
//          }
//          return count ;
        
        
          int mini =*min_element(nums.begin(),nums.end());
         int ans =0;
         for(auto elem : nums)
         {
              ans+= (elem-mini);
         }
    return ans ;
        
        
        
    }
};