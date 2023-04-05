class Solution
{
    public:
        vector<vector < int>> findMatrix(vector<int> &nums)
        {
            vector<vector < int>> ans;
            unordered_map<int, int> mp;
            for (auto elem: nums)
            {
                mp[elem]++;
            }
            while (mp.size() != 0)
            {
                vector<int> need;
                for (auto elem: mp)
                {

                    need.push_back(elem.first);
                    mp[elem.first]--;
                }

                for (auto it = mp.begin(); it != mp.end();)
                {
                    if (it->second == 0)
                        it = mp.erase(it);
                    else
                        ++it;
                }

                ans.push_back(need);
            }
            return ans;
        }
};