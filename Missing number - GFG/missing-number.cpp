//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
 

  int need =0;
 int check= (N*(N+1))/2;

//  cout << check <<" "<< need<<endl;
 for(int i =0; i < N-1 ;i++)
 {
    //   cout << A[i]<<endl;
      need+=A[i];
 }
  return check-need;
    
}