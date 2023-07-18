//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int>ans;
           stack<pair<int,int>>st;
             for(int i =0; i < n ; i++)
             {
                  if(st.size()==0)
                  {
                      ans.push_back(-1);
                  }
                  else if( st.top().first>price[i])
                  {
                          ans.push_back(st.top().second);
                  }
                  else if(st.top().first<=price[i])
                  {
                       while(st.size() != 0 && st.top().first<=price[i])
                       {
                            st.pop();
                            
                       }
                       if(st.size()==0)
                       {
                            ans.push_back(-1);
                       }
                       else{
                           ans.push_back(st.top().second);
                       }
                  }
                   st.push({price[i],i}); 
                  
             }
              int count =0;
              for(auto &elem : ans )
              {
                   elem= abs(elem-count);
                    count++;
              }
              return ans ;
       // Your code here
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends