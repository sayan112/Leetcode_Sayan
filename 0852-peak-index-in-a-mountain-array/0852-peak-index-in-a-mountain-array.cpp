class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
          int start = 0;
            int end = nums.size() - 1;
            if (nums.size() == 1)
            {
                return 0;
            }
            while (end >= start)
            {
                int mid = start + (end - start) / 2;
                if (mid > 0 && mid < nums.size() - 1)
                {

                    if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                    {
                        return mid;
                    }
                    else if (nums[mid] < nums[mid - 1])
                    {

                        end = mid - 1;
                    }
                    else
                    {
                        start = mid + 1;
                    }
                }
                else if (mid == 0)
                {
                    if (nums[0] > nums[1])
                    {
                        return 0;
                    }
                    else
                    {
                        return 1;
                    }
                }
                else if (mid == nums.size() - 1)
                {
                    if (nums[mid] > nums[nums.size() - 2])
                    {
                        return mid;
                    }
                    else
                    {
                        return nums.size() - 2;
                    }
                }
            }
            return 0;
        }
    
};