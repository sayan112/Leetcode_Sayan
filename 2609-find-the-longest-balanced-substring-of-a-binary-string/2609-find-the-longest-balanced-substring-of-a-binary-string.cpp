class Solution
{
    public:
        int findTheLongestBalancedSubstring(string s)
        {

            int need1 = 0;
            int need2 = 0;
            int need = 0;
            if (s[0] == '1')
            {
                need1++;
            }
            else
            {
                need2++;
            }
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] == '0' && s[i - 1] == '1')
                {
                    need1 = 0;
                    need2 = 0;
                }

                if (s[i] == '1')
                {
                    need1++;
                }
                else
                {
                    need2++;
                }

                need = max(need, min(need1, need2));
            }

            return need * 2;
        }
};