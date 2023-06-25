//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>mp;
         int sum=0;
        int maxi=0;
         for(int i =0; i<A.size();i++)
         {
            sum+=A[i];
             if(sum==0)
             {
                maxi=max(maxi,i+1);
             }
             
                  if(mp.find(sum)!=mp.end())
                  {
                       maxi=max(maxi,(i-mp[sum]));
                  }
                  else{
                      mp[sum]=i;
                  }
             
         }
        //  for(auto elem : mp)
        //  {
        //      cout << elem.first<<" "<<elem.second<<endl;
        //  }
          return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends