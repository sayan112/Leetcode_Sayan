class Solution
{
    public:
        long long largestPerimeter(vector<int> &nums)
        {

            sort(nums.begin(), nums.end());
                 long long sum = nums[0]+nums[1];
                  long long perimeter=0;
            int idx = -1;
            for (int i = 2; i < nums.size(); i++)
            {
                
                 if(sum>nums[i])
                 {
                     perimeter=(sum+nums[i]);
                 }
                
                sum+=nums[i];
            }
            if(perimeter==0)
            {
                return -1;
            }
             return perimeter;
        }
};