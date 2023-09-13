class Solution
{
    public:
        vector<string> commonChars(vector<string> &words)
        {
            unordered_map<char, int> mp;
            for (auto elem: words[0])
            {
                mp[elem]++;
            }
            unordered_map<char, int> mp1;
            for (int i = 1; i < words.size(); i++)
            {
                mp1.clear();
                for (auto elem: words[i])
                {
                    mp1[elem]++;
                }
                
                for (auto &elem: mp)
                {
                      elem.second = min( elem.second, mp1[elem.first]);
                    
                }
            }
            vector<string> ans;

            for (auto elem: mp)
            {
                if (elem.second != 0)
                {

                    while (elem.second--)
                    {
                        string tempans;
                        tempans += elem.first;
                        ans.push_back(tempans);
                    }
                }
            }

            return ans;
        }
};