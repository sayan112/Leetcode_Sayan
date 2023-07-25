class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets) {
            vector<pair<int, int>> sortedIndices;
        for (int i = 0; i < indices.size(); ++i) {
            sortedIndices.emplace_back(indices[i], i);
        }
        sort(sortedIndices.rbegin(), sortedIndices.rend());

        for (const auto& pair : sortedIndices) {
            int index = pair.first;
            int i = pair.second;
            const string& source = sources[i];
            const string& target = targets[i];

            if (s.substr(index, source.size()) == source) {
                s.replace(index, source.size(), target);
            }
        }

        return s;
    }
};