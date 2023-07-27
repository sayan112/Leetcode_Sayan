class Solution
{
    public:
        string frequencySort(string s)
        {
            unordered_map<char, int> mp;
            for (auto elem: s)
            {
                mp[elem]++;
            }

            priority_queue<pair<int, char>> q;
            for (auto elem: mp)
            {
                q.push({ elem.second,
                    elem.first });
            }

            string ans;
            while (q.size() != 0)
            {
                auto it = q.top();
                q.pop();
                cout << it.first << " " << it.second << endl;
                while (it.first--)
                {
                    ans += it.second;
                }
            }
            return ans;
        }
};