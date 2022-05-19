class Solution {
public:
    char nextGreatestLetter(vector<char>& vec, char find) {
            int n = vec.size() - 1;
    int start = 0;
    int end = n;
        char ans = vec[0];
    while (start <= end)
    {
        int mid = (start + end) / 2;
     
        if (vec[mid] > find)
            
        {
            ans = vec[mid];
            end = mid - 1;
        }
        else
        {

            start = mid + 1;
        }
    }
    return ans;
    }
};