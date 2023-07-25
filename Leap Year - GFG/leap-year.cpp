//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
bool LeapYear(int a)
{
  if(a%4==0)
  {
     if(a%100==0)
     {
        if(a%400==0)
     {
         return true;

     }
     else{
         return false;
     }
     }
     else{
         return true;
     }

  }
  else{
     return false;
  }
}
    int isLeap(int N){
        //code here
    return    LeapYear(N);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends