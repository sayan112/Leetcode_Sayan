class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        // code here
         int maxifromstart[n] ;
        maxifromstart[0] = height[0];
          for(int i=1;i<n;i++)
          {
              maxifromstart[i]=max(  maxifromstart[i-1],height[i]);
          }
             int maxifromBack[n] ;
        maxifromBack[n-1] = height[n-1];
                for(int i=n-2;i>=0;i--)
          {
              maxifromBack[i]=max(  maxifromBack[i+1],height[i]);
          }
           long long water[n];
             for(int i=0;i<n;i++)
          {
              water[i]=min(  maxifromstart[i],    maxifromBack[i])-height[i];
          }
           long long  sum =0;
           for(int i=0;i<n;i++)
          {
               sum+=water[i];
          }
           return sum;     
    }
};