class Solution
{
    public:
        int helper(string s, int start, int end, int k)
        {

            if (end - start < k)
            {
                return 0;
            }
            unordered_map<char, int> mp;
           for ( int i =start ; i < end ; i++)
           {
                mp[s[i]]++;
           }
            for (int i = start; i < end; i++)
            {
                if (mp[s[i]] < k)
                {
                    int j = i + 1;
                    while (j < end && mp[s[j]] < k)
                    {
                        j++;
                    }
                    int leftside = helper(s, start, i, k);
                    int rightside = helper(s, j, end, k);
                    return max(leftside, rightside);
                }
            }
            return end - start;
        }

    int longestSubstring(string s, int k)
    {
        if (k > s.size())
        {
            return 0;
        }

        return helper(s, 0, s.size(), k);
    }
};