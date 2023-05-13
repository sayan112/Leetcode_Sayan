class Solution
{
    public:
        string removeSpaces(string & str)
        {
            str.erase(remove(str.begin(), str.end(), ' '), str.end());
            return str;
        }
    string decodeMessage(string key, string message)
    {
        removeSpaces(key);

        unordered_map<char, char> mp;
        int code = 1;
        for (int i = 0; i < key.size(); i++)
        {

            char keychar = 'a' + code - 1;
            if (mp.find(key[i]) == mp.end())
            {
                mp[key[i]] = keychar;
                code++;
            }
        }
        string ans;
        for (auto elem: message)
        {
            if (elem != ' ' && mp.find(elem) != mp.end())
            {
                ans += mp[elem];
            }
            else
            {
                ans += ' ';
            }
        }

        return ans;
    }
};