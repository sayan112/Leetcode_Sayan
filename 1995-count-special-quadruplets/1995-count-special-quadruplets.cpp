class Solution
{
    public:
        int countQuadruplets(vector<int> &nums)
        {


            int need = 0;
            for (int i = 0; i < nums.size()-3; i++)
            {
              

                for (int j = i + 1; j < nums.size()-2; j++)
                {
                    for (int k = j + 1; k < nums.size()-1; k++)
                    {

                        for (int p = k + 1; p < nums.size(); p++)
                        {

                            if (nums[p] == (nums[i] + nums[j] + nums[k]) )
                            {
                      
                                need++;
                            }
                        }
                    }
                }
            }
            return need;
        }
};