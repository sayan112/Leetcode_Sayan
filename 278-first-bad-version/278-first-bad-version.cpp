// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
    
         int start =0;
         int end = n ; 
        int ans =0;
         while(end>=start)
         {
              int mid = start + (end - start) / 2;
             if(isBadVersion(mid))
             {
                 ans =mid;
                 end = mid-1;
                 
             }
             else{
                 start=mid+1;
             }
             
         }
         return ans;
    }
};