class Solution
{
    public:
        bool checkanypalindrom(int start, int end, string s)
        {
            while (end >= start)
            {
                if (s[end] != s[start])
                {
                    return false;
                }
                end--;
                start++;
            }
            return true;
        }
    string longestPalindrome(string s)
    {
        int maxi = 0;
        string ans;

        for (int start = 0; start < s.size(); start++)
        {
            for (int end = start; end < s.size(); end++)
            {
                if ((s[start]==s[end]) && checkanypalindrom(start, end, s))
                {

                    int size = end - start + 1;
                    if (maxi <= size)
                    {
                        maxi = size;
                        ans = s.substr(start, size);
                    }
                }
            }
        }
         return ans ;
    }
};