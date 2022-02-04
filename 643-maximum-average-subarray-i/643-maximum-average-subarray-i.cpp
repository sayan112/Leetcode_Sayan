class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int  i=0;
         int j=0;
         double sum =0;
         int n = nums.size();
         double  avg=0;
         vector<double>vec;
         while(j<n)
         {
                sum+=nums[j];
              if(j-i+1<k)
              {
                   j++;
              }
             else if(j-i+1==k) {
                   avg=double(sum/k);
                  vec.push_back(avg);
                 sum-=nums[i];
                 i++;
                 j++;
                 
             }
         }
        double maxi= *max_element(vec.begin(),vec.end());
        return maxi;
        
        
    }
};