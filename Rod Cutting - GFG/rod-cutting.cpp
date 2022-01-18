// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++
class Solution{
  public:
int need(int price[],int n , int idx,unordered_map<string,int>&mp)
{
     if(n==0)
     {
         return 0;
     }
      if(idx>=n)
      {
          return 0 ; 
      }
            
        string currentKey = to_string(idx) + "_" +  to_string(n);
        
        if(mp.find(currentKey)!=mp.end()){
           return mp[currentKey];
        }
        
      int kate =0;
       if(idx+1<=n)
       {
            kate  =price[idx]+ need(price,n-(idx+1),idx,mp);
       }
       int nahikate = need(price,n, idx+1,mp);
               mp[currentKey] = max(kate,nahikate );
        return  mp[currentKey]  ;
      
}

    int cutRod(int price[], int n) {
                unordered_map<string,int>mp;
      return need(price,n,0,mp);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends