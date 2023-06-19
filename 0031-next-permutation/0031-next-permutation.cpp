
class Solution
{
public:
    void nextPermutation(vector<int> &vec)
    {

        //         c++ stl solution :)

        // next_permutation(nums.begin(),nums.end());

        // Best optimised approach :)
        int i;
        for (i = vec.size() - 2; i >= 0; i--)
        {
            if (vec[i] < vec[i + 1])
            {
                break;
            }
        }
        cout << i;
        if (i < 0)
        {
            reverse(vec.begin(), vec.end());
        }

        else
        {
            for (int j = vec.size() - 1; j > 0; j--)
            {

                if (vec[j] > vec[i])
                {
                    swap(vec[j], vec[i]);
                    break;
                }
            }
            reverse(vec.begin() + i + 1, vec.end());
        }
    }
};