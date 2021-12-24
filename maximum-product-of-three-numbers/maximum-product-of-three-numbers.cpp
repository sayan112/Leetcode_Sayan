class Solution {
public:
    int maximumProduct(vector<int>&vec) {
        int maxi=-2147483647;
  int n = vec.size();
    sort(vec.begin(),vec.end());
         maxi = max(maxi, (vec[n-1]*vec[n-2]*vec[n-3]));
         maxi = max(maxi, (vec[0]*vec[1]*vec[n-1]));
         maxi = max(maxi, (vec[0]*vec[1]*vec[2]));
        
        
         return maxi;
        
        
    }
};