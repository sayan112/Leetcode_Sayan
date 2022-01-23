class Solution {
public:
    int countElements(vector<int>& a) {
        // return nums.size()-2;
        int mini =  *min_element(a.begin(), a.end());
        int maxi = *max_element(a.begin(), a.end());
         int need =0;
         for(auto elem : a)
         {
              if(elem== mini || elem== maxi)
              {
                   need++;
              }
         }
         return a.size()-need;
        
        
        
    }
};