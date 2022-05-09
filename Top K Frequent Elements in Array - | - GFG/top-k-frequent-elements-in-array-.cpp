// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
         unordered_map<int,int>mp;
          for(auto elem : nums)
          {
              mp[elem]++;
              
          }
           priority_queue<pair<int,int>>pq;
          
           for(auto elem : mp)
           {
                pq.push({elem.second,elem.first});
                // if(pq.size()>k)
                // {
                //     pq.pop();
                // }
           }
            vector<int>need;
             
         while(k--)
         {
             auto elem = pq.top();
             need.push_back(elem.second);
             pq.pop();
         }
          return need;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends