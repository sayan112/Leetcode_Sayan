class Solution
{
    public:
        vector<vector < int>> fourSum(vector<int> &nums, int target)
        {
            vector<vector < int>> ans;

            if (nums.size() == 0)
            {
                return ans;
            }
            int n = nums.size();
            sort(nums.begin(), nums.end());

            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    long long int target2 = (long)target - (nums[i] + nums[j]);
                    int left = j + 1;
                    int right = n - 1;
                    while (left < right)
                    {
                        int twosum = nums[left] + nums[right];
                        if (twosum > target2)
                        {
                            right--;
                        }
                        else if (twosum < target2)
                        {
                            left++;
                        }
                        else
                        {

                            vector<int> need;
                            need.push_back(nums[i]);
                            need.push_back(nums[j]);
                            need.push_back(nums[left]);
                            need.push_back(nums[right]);
                            ans.push_back(need);
                            while (right > left && nums[left] == need[2])
                            {
                                left++;
                            }
                            while (right > left && nums[right] == need[3])
                            {
                                right--;
                            }
                        }
                    }
                    while (j + 1 < n && nums[j + 1] == nums[j]) j++;
                }

                while (i + 1 < n && nums[i + 1] == nums[i]) i++;
            }
            return ans;
        }
};