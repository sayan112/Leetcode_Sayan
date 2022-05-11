class Solution
{
    public:
    int  binarysearchfindstartX(vector<int> vec, int x)
        {

            int first = -1;
            int start = 0;
            int end = vec.size() - 1;
            bool need = true;

            while (start <= end)
            {

                int mid = start + (end - start) / 2;	//
                if (vec[mid] == x)
                {
                    first = mid;
                    end = mid - 1;
                }
                else if (vec[mid] < x)
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            return  first;
        }

    int binarysearchfindendX(vector<int> vec, int x)
    {

        int start = 0;
        int finalop = -1;
        int end = vec.size() - 1;
        bool need = true;

        while (start <= end)
        {

            int mid = start + (end - start) / 2;	//
            if (vec[mid] == x)
            {
                finalop = mid;
                start = mid + 1;
            }
            else if (vec[mid] < x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return  finalop;
    }

    vector<int> searchRange(vector<int> &nums, int X)
    {

         vector<int>ans ; 
        int op1= binarysearchfindstartX(nums, X);

       int op2= binarysearchfindendX(nums, X);
        ans.push_back(op1); ans.push_back(op2);
        return ans;
    }
};