class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            int num1 = -1;
            int num2 = -1;
            int count1 = 0;
            int count2 = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                  if (num1 == nums[i])
                {
                    count1++;
                }
               else  if (num2 == nums[i])
                {
                    count2++;
                }
               else if (count1 == 0)
                {
                    num1 = nums[i];
                    count1 = 1;
                }
                else if (count2 == 0)
                {
                    num2 = nums[i];
                    count2 = 1;
                }
               
                else
                {
                    count1--;
                    count2--;
                }
            }
            vector<int> ans;
            int countagain = 0;
            int countagain2 = 0;
    if(num1==num2)
    {
        ans.push_back(num1);
        return ans;
    }
            for (auto elem: nums)
            {
                if (num1 == elem)
                {
                    countagain++;
                }
                if (num2 == elem)
                {
                    countagain2++;
                }
            }
            int need = nums.size() / 3;

            if (need < countagain)
            {
                ans.push_back(num1);
            }
            if (need < countagain2)
            {
                ans.push_back(num2);
            }
            return ans;
        }
};