class Solution
{
    public:
        void reverseString(vector<char> &s)
        {
            int start = 0;
            int end = s.size()-1;
            while (end >= start)
            {
                swap(s[end], s[start]);
                end--;
                start++;
            }
        }
};