
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        //         c++ stl solution :)

        // next_permutation(nums.begin(),nums.end());

        // Best optimised approach :)
         // 2 1 5 3 0 0
//      2 3 1 5 00
        int i ;
         for( i = nums.size()-2;i>=0;i--)
         {
             if(nums[i]<nums[i+1])
             {
                 break;
             }
         }
         int breakpoint =i;
         // cout << breakpoint;
         if(breakpoint<0)
         {
              reverse(nums.begin(),nums.end());
           return ;  
         }
        else{
            
     
        for(int j=nums.size()-1;j>0;j--)
        {
             if(nums[breakpoint]<nums[j])
             {
                 cout << breakpoint <<" "<< j ;
                  swap(nums[i],nums[j]);
                  break;
             }
        }
          reverse(nums.begin() + i + 1, nums.end());     
           }
    }};