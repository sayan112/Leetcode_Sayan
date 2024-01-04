class Solution
{
    public:
        bool check(vector<int> &arr)
        {
            for (int i = 1; i < arr.size(); i++)
            {
                if (arr[i - 1] >= arr[i])
                {
                    return false;
                }
            }
   
            return true;
        }
    int incremovableSubarrayCount(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i; j < nums.size(); j++)
            {

                vector<int> arr;
                // elems other than the subarray , and check those subarray is that strictly increasing or not 
                for (int k = 0; k < i; k++)
                {
                    arr.push_back(nums[k]);
                }

                for (int k = j + 1; k < nums.size(); k++)
                {
                    arr.push_back(nums[k]);
                }
                if (check(arr))
                {
                    count++;
                }
            }
        }
        return count;
    }
};