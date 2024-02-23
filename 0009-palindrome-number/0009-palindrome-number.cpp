class Solution
{
    public:
        bool isPalindrome(int x)
        {

            string need = to_string(x);
            int start = 0;
            int end = need.size() - 1;
            while (end >= start)
            {
                if (need[start] != need[end])
                {
                    return false;
                }
                end--;
                start++;
            }
             return true;
        }
};