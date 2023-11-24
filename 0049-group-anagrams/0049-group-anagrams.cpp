class Solution
{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs)
        {
            vector<vector < string>> ans;
            unordered_map<string, vector < string>> mp;
            for (auto elem: strs)
            {
                string temp = elem;
                sort(temp.begin(), temp.end());
                mp[temp].push_back(elem);
            }
            for (auto elem: mp)
            {

                ans.push_back(elem.second);
            }
            return ans;
        }
};