// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	   unordered_map<char,int>mp;
	   int n = txt.size();
	   int k= pat.size();
	    
	    for(auto elem : pat )
	    {
	        mp[elem]++;
	    }
	    
	    int i=0;
	     int j=0;
	      int count =0;
	   //  while(j<n)
	   //  {
	   //       if(mp.find(txt[j]) != mp.end())
	   //       {
	   //           mp[txt[j]]--;
	   //           if(mp[txt[j]]==0)
	   //           {
	   //        mp.erase(txt[j]);
	   //           }
	   //       }
	         
	   //      if(j-i+1<k)
	   //      {
	   //          j++;
	   //      }
	   //      else if (j-i+1==k)
	   //      {
	   //          if(mp.size()==0)
	   //          {
	   //              count++;
	   //          }
	             
	   //          if(mp.find(txt[i])!=mp.end())
	   //          {
	   //              mp[txt[i]]++;
	   //          }
	   //          i++;
	   //          j++;
	             
	   //      }
	   //  }
	   //   return count ;
	   
	    int ct =mp.size();
	    int ans =0;
	    
	     while(j<n)
	     {
	          if(mp.find(txt[j]) != mp.end())
	          {
	              mp[txt[j]]--;
	              if(mp[txt[j]]==0)
	              {
	          ct--;
	              }
	          }
	         
	         if(j-i+1<k)
	         {
	             j++;
	         }
	         else if (j-i+1==k)
	         {
	             if(ct==0)
	             {
	                ans++;
	             }
	             
	             if(mp.find(txt[i])!=mp.end())
	             {
	                 mp[txt[i]]++;
	                 if(mp[txt[i]]==1)
	                 {
	                     ct++;
	                 }

	             }
	             i++;
	             j++;
	             
	         }
	     }
	      return ans ;
	   
	   
	   
	   
	   
	   
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends