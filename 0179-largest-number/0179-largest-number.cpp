class Solution {
public:
   
    static bool compare (int a , int b )
    {
        string need1= to_string(a)+to_string(b);
        string need2=to_string(b)+to_string(a);
        return need1>need2;
    }
    string largestNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end(),compare) ; 
     
        string ans;
        for(auto elem : nums)
        {
            ans+=to_string(elem);
        }
         if(nums[0]==0)
         {
              return "0";
         }
         return ans ;
    }
};