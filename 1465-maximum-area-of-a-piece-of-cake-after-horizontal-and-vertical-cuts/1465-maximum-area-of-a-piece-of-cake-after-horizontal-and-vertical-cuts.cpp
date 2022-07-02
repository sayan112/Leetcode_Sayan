class Solution {
    int calcMaxDist(vector<int>& cuts, int end) {
        cuts.push_back(0);
        cuts.push_back(end);
        sort(cuts.begin(), cuts.end());
        int dist = 0;
        for (int i = 1; i < cuts.size(); i++) {
            dist = max(dist, cuts[i] - cuts[i - 1]);
        }
        return dist;
    }
    
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        const int MOD = 1e9 + 7;
        int maxHeight = calcMaxDist(horizontalCuts, h);
        int maxWidth = calcMaxDist(verticalCuts, w);
        int area = (int) ((long long) maxWidth * maxHeight % MOD);
        return area;
    }
};