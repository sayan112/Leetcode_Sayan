class Solution
{
    public:
        int characterReplacement(string s, int k)
        {
            int i = 0;
            int j = 0;
            unordered_map<char, int> mp;
            int maxi = 0;
            int ans = 0;
            while (j < s.size())
            {
                mp[s[j]]++;
                maxi = max(maxi, mp[s[j]]);
              
                if (((j - i + 1) - maxi) > k)
                {
                    mp[s[i]]--;
                    i++;
                }

                ans = max(ans, (j - i + 1));
                j++;
            }
            return ans;
        }
};

