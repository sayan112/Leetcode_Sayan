class Solution {
public:
    int getSum(int a, int b) {
      vector<int>ansvec;
      ansvec.push_back(a);
        ansvec.push_back(b);
         int ans = accumulate(ansvec.begin(),ansvec.end(),0);
         return ans;
    }
};