class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {

           	//            sort(nums.begin(),nums.end());
           	// O(N*logN)

            int start = 0;
            int high = nums.size() - 1;
            int mid = 0;
            while (high >= mid)
            {
                if (nums[mid] == 1)
                {
                    mid++;
                }
                else if (nums[mid] == 0)
                {
                    swap(nums[start], nums[mid]);
                    start++;
                    mid++;
                }
                else
                {
                    swap(nums[mid], nums[high]);
                    high--;
                }
            }
        }
};