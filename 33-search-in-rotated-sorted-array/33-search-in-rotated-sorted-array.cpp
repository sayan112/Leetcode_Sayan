class Solution
{
    public:
        int findMin(vector<int> &nums)
        {
            int start = 0;
            int size = nums.size();
            int end = nums.size() - 1;
            if (nums[end] >= nums[start])
            {
                return 0;
            }
            else
            {
                while (end >= start)
                {
                    int mid = (end + start) / 2;
                    int prev = (mid + nums.size() - 1) % size;
                    int next = (mid + 1) % size;
                    if (nums[mid] <= nums[prev] && nums[mid] <= nums[next])
                    {
                        return mid;
                    }
                    else if (nums[mid] > nums[end])
                    {
                        start = mid + 1;
                    }
                    else
                    {
                        end = mid;
                    }
                }
            }
            return -1;
        }
    int binearsearch(vector<int> nums, int target, int start, int end)
    {
        while (end >= start)
        {
            int mid = (end + start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int min = findMin(nums);
        if(min==0)
        {
            return binearsearch(nums, target, 0,nums.size() - 1 );
        }
        if (target >= nums[0])
        {
            int need1 = binearsearch(nums, target, 0, min - 1);
            return need1;
        }
        else
        {

            int need2 = binearsearch(nums, target, min, nums.size() - 1);
            return need2;
        }

        return -1;
    }
};