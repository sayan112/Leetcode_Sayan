class Solution {
public:
    int fib(int n) {
        vector<int>vec;
         vec.push_back(0);
         vec.push_back(1);
         for(int i=2;i<=n;i++)
         {
             vec.push_back(vec[i-1]+vec[i-2]);
         }
         return vec[n];
    }
};