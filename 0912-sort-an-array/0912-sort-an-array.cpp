class Solution
{
    public:
        int partiion(vector<int> &nums, int low, int high)
        {
            int pivot = nums[low];
            int i = low;
            int j = high;
            while (i < j)
            {
                // find the first greater elem than pivot 
                while (pivot >= nums[i] && i < high )
                {
                    i++;
                }
                   // find the first smaller  elem than pivot 
                while (pivot < nums[j] && j > low )
                {
                    j--;
                }

                if (i < j)
                {
                    swap(nums[i], nums[j]);
                }
            }
            swap(nums[low], nums[j]);
            return j;
        }
    void quicksort(vector<int> &nums, int low, int high)
    {
        if (low >= high)
        {
            return;
        }
        int pivot = partiion(nums, low, high);
        quicksort(nums, low, pivot - 1);
        quicksort(nums, pivot + 1, high);
    }
    vector<int> sortArray(vector<int> &nums)
    {

        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};