class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int ans = 0;
        int l, u;
        
		// Sorting ages, and then we can do binary search.
        sort(ages.begin(), ages.end());
        
		// Find the range of each user.
        for (int i = 0; i < ages.size(); ++i) {
            
			// 0.5x + 7 may be greater than x. We can skip this loop if it happens.
            if (0.5 * ages[i] + 7 >= ages[i]) {
                continue;
            }
            
			// Search the smallest y in the range (0.5x + 7, x].
			// A trick is that passing right hand side to limit the searching range
			// which can improve its speed a little.
            l = searchLowerBound(ages, 0.5 * ages[i] + 7, i);
            
			// Search the largest y. Because we need to consider the duplicated values of x.
			// The index of largest y may be greater than i.
			// Minusing 1 at the end is to exclude self.
            u = upper_bound(
                ages.begin() + i, ages.end(), ages[i]) - ages.begin() - 1;
            
            ans += u - l;
        }
        
        return ans;
        
    }
    
	// This function searchs the index of the smallest value greater than `val`
    int searchLowerBound(vector<int>& ages, int val, int r) {
        int l = 0;
        
        while (l <= r) {
            int m = (l + r) / 2;
            
            if (ages[m] <= val) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        
        return l;
    }
};
