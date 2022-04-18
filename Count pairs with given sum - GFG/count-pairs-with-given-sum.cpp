// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
    int count =0;
    unordered_map<int,int>mp;
   
    
    for(int i=0; i <  n ;i++)
    {
        
    if(mp.find((k-arr[i]))!=mp.end())
    {
        count+=mp[k-arr[i]];
     
    }
      mp[arr[i]]++; 
    
    }
    return count;
    
    
    // for(int i=0; i <  n ;i++)
    // {
    //       for(int j=0; j <n;j++)
    // {
    //     if(arr[i]+arr[j]==k && i!=j)
    //     {
    //         count++;
    //     }
    // }
    // }
    // return count/2 ; 
    
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends