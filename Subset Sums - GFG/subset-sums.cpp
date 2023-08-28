//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
 void generateAllSubsets(vector<int>&arr,int idx,vector<int>&ds,   vector<vector<int>>&ans)
 {
      if(idx==arr.size())
      {
          ans.push_back(ds);
           return;
      }
      ds.push_back(arr[idx]);
     
     generateAllSubsets(arr,idx+1,ds,ans);
     ds.pop_back();
       generateAllSubsets(arr,idx+1,ds,ans);
     
 }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<vector<int>>ans;
         vector<int>ds;
          int idx =0;
         generateAllSubsets(arr,idx,ds,ans);
          vector<int>realans;
          for(auto elem : ans)
          {
               int sum=0;
               for(auto elem1 :elem )
               {
                   sum+=elem1;
               }
                realans.push_back(sum);
                
          }
           return realans;
              
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends