// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int n)
    {
       vector<int>vec;
    vec.push_back(1);
     vec.push_back(2);
      vec.push_back(5);
       vec.push_back(10);
        vec.push_back(20);
         vec.push_back(50); 
          vec.push_back(100);
           vec.push_back(200);
            vec.push_back(500);
       vec.push_back(2000);
       vector<int>ans;
       
       
        for(int i=vec.size()-1; i>=0; i--)
        {
            while( n >=vec[i])
            {
                n-=vec[i];
                ans.push_back(vec[i]);
            }
        }
         return ans;
       
    
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends