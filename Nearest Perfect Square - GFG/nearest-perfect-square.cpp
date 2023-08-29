//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
        vector<int>ans;
 
        
       double need = sqrt(N);
        int roundneed= round(need);
        // cout << roundneed<<endl;
               ans.push_back(roundneed*roundneed);
          ans.push_back(abs(N-(roundneed*roundneed)));
         return ans ;
         
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends