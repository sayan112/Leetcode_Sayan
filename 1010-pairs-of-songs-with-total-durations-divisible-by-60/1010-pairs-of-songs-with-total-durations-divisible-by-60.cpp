class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        long long hash[61] = {0}, ans = 0;
        
        for(int t: time) ++hash[t%60];
        
        for(int i=1; i<30; i++)
            ans += ( hash[i] * hash[60-i]);
        
        return ans + hash[0]*(hash[0]-1)/2 + hash[30]*(hash[30]-1)/2;
    }
};