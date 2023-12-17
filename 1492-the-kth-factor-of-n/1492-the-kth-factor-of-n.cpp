class Solution {
public:
    int kthFactor(int n, int k) {
     vector<int>need;
         for(int i =1;i<=n/2;i++ )
         {
             if(n%i==0)
             {
                 need.push_back(i);
             }
         }
        need.push_back(n);
        if(need.size()<k)
        {
            return -1;
        }
         return need[k-1];
    }
};