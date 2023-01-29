class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {

            int numberof0 = 0;
            int numberof1 = 0;
            int numberof2 = 0;
            for (auto elem: nums)
            {
                if (elem == 0)
                {
                    numberof0++;
                }
                else if (elem == 1)
                {
                    numberof1++;
                }
                else
                {
                    numberof2++;
                }
            }
            
            nums.clear();
            for(int i=0; i < numberof0;i++)
            {
                nums.push_back(0);
            }
              for(int i=0; i < numberof1;i++)
            {
                nums.push_back(1);
            }
              for(int i=0; i < numberof2;i++)
            {
                nums.push_back(2);
            }
            
            
        }
};