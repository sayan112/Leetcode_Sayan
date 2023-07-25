class Solution
{
    public:
        string findReplaceString(string s, vector<int> &indices, vector<string> &sources, vector< string > &targets)
        {
            vector<pair<int, int>> sortedIndices;
            for (int i = 0; i < indices.size(); ++i)
            {
                sortedIndices.emplace_back(indices[i], i);
            }
            sort(sortedIndices.rbegin(), sortedIndices.rend());
               
            // The sorting of indices in reverse order ensures that replacements are made from right to left, preventing issues where replacements might affect the position of other indices to be replaced.
            
            
            for (auto elem: sortedIndices)
            {
                int index = elem.first;
                int i = elem.second;
                string source = sources[i];
                string target = targets[i];
                cout << source << " " << target << endl;

                if (s.substr(index, source.size()) == source)
                {
                    s.replace(index, source.size(), target);
                }
            }

         
            return s;
        }
};