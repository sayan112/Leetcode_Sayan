class Solution
{
    public:
        string reverseWords(string str)
        {
            string need = "";
            vector<string> str2;
            for (int i = 0; i < str.size(); i++)

            {

                if (str[i] == ' ')
                {
                    if ((need.size() >= 1))
                    {
                        if (need[0] != ' ')
                        {
                            str2.push_back(need);
                        }
                    }
                    need = "";
                }
                else
                {
                    need += str[i];
                }
                if (i == str.size() - 1)
                {
                     if(need !="")
                     {
                          str2.push_back(need);
                     }
                   
                }
            }

            string ans;
            for (int i = str2.size() - 1; i >= 0; i--)
            {
                ans += str2[i];
                if (i != 0)
                {
                    ans += ' ';
                }
            }

            return ans;
        }
};