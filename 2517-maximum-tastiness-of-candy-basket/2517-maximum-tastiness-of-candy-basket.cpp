class Solution {
public:
     bool ispossibletoplace (vector<int>& price , int k , int space)
     {
           int need = price[0];
          int count =1;
          for(int i=1; i < price.size();i++)
          {
              if(price[i]-need>=space)
              {
                   count++;
                   need=price[i];
                  if(count==k)
              {
                   return true;
              }
              }
           
          }
          return false;
         
     }
    int maximumTastiness(vector<int>& price, int k) {
        
         int n = price.size();
         sort(price.begin(),price.end());
    int ans =0;
         int low=1;
         int high= price[n-1]-price[0];
        while(high>=low)
        {
             int mid = (high+low)/2;
            if(ispossibletoplace(price,k,mid))
            {
                 ans =mid;
                 low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans ;
    }
};