class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& m, int k) {
        vector<int> temp;
        
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++) temp.push_back(m[i][j]);
        }
        
        k = k % temp.size();
        
        reverse(temp.begin(), temp.end() - k);
        reverse(temp.end() - k, temp.end());
        reverse(temp.begin(), temp.end());
        
        int p = 0;
        
        for(int i=0; i<m.size(); i++){
            for(int j=0; j<m[i].size(); j++) m[i][j] = temp[p++];
        }
        
        return m;
    }
};