class Solution {
//Sorting in increasing order of start and decresing order of end elements.
    static bool comp(vector<int> a, vector<int> b){
        if(a[0]!=b[0]) return a[0]<b[0];
        else return a[1]>b[1];
    }
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        
        int toRemove=0;
        vector<int> currCoveringInterval = intervals[0];
		
        for(int i=1; i<intervals.size(); i++){
		//if the currCoveringInterval covers the interval, then remove this interval
            if(currCoveringInterval[0]<=intervals[i][0] && currCoveringInterval[1]>=intervals[i][1]){
                toRemove++;
            }
            else {
                currCoveringInterval = intervals[i];
            }
        }
        return intervals.size()-toRemove;
    }
};