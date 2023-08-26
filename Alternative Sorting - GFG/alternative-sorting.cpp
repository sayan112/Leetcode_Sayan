//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	     sort(arr,arr+N);
	     vector<int>need;
	     
	      int start=0;
	       int end =N-1;
	      while(end>=start)
	      {
	           if(end==start)
	           {
	                   need.push_back(arr[start]);
	           }
	           else{
	               	          need.push_back(arr[end]);
	          need.push_back(arr[start]);
	           }

	          end--;
	          start++;
	          
	      }
	       return need;
	    // Your code goes here
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends