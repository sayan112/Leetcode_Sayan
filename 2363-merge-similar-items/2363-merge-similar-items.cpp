class Solution
{
    public:
        vector<vector < int>> mergeSimilarItems(vector<vector < int>> &items1, vector< vector< int>> &items2)
        {
            vector<vector < int>> ans;
            map<int, int> mp;

            for (auto elem: items1)
            {
                mp[elem[0]] = elem[1];
            }
            for (auto elem: items2)
            {
                if (mp.find(elem[0]) != mp.end())
                {
                    mp[elem[0]] += elem[1];
                }
                else{
                    mp[elem[0]]=elem[1];
                }
            }
            for (auto elem: mp)
            {
                vector<int> ans1;
                ans1.push_back(elem.first);
                ans1.push_back(elem.second);
                ans.push_back(ans1);
            }
            return ans;
        }
};