class Solution
{
    public:
        string Decode(string &s, int &i)
        {

            string result;
            while (i < s.size() && s[i] != ']')
            {
                if (isdigit(s[i]))
                {
                    int k = 0;
                    while (i < s.size() && isdigit(s[i]))
                    {
                        k = k *10 + s[i] - '0';
                        i++;
                    }

                    i++;
                    string r = Decode(s, i);
                    while (k > 0)
                    {
                        result += r;

                        k--;
                    }
                    i++;
                }
                else
                {
                    result += s[i];
                    i++;
                }
            }
            return result;
        }
    string decodeString(string s)
    {
        int i = 0;
        return Decode(s, i);
    }
};