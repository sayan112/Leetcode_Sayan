class Solution
{
    public:
        int compress(vector<char> &chars)
        {
            int count = 1;

            int i = 0;
          
            for (int j = 1; j <=chars.size(); j++)
            {
                 if(j==chars.size())
                 {
                     chars[i] = chars[j - 1];
                    i++;
                    if (count >= 2)
                    {
                        string countstr = to_string(count);
                        for (auto elem: countstr)
                        {
                            chars[i] = elem;
                            i++;
                        }
                        count = 1;
                    }
                     break;
                 }
                if (chars[j] == chars[j - 1])
                {
                    count++;
                }
                else if (chars[j] != chars[j - 1])
                {
                    chars[i] = chars[j - 1];
                    i++;
                    if (count >= 2)
                    {
                        string countstr = to_string(count);
                        for (auto elem: countstr)
                        {
                            chars[i] = elem;
                            i++;
                        }
                        count = 1;
                    }
                   
                }
            }
             cout << i;
            return i;
        }
};