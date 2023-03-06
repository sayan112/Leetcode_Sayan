//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        int count = 1;
        
        //1. store start and end times in pair(end[i], start[i])
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            v.push_back(make_pair(end[i], start[i]));    
        }
        
        //2. sort on the basis of end times
        sort(v.begin(), v.end());
        
        //3. count the number of meetings(end time of a meeting < start time of next meeting)
        int previous = v[0].first;
        for(int i=1; i<n; i++){
            if(previous < v[i].second){
                count++;
                previous = v[i].first;
            }
        }
        
        
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends