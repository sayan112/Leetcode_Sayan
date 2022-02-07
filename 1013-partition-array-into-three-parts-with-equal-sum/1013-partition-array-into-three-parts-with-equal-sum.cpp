class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        
         int sum =0;
         for(auto elem : arr)
         {
              sum +=elem;
         }
        // cout << need << " ";
    
         int  need= sum/3;
          int suma=0;
         int count=0;
         for(int i=0; i<arr.size();i++)
         {
             suma+=arr[i];
        
              if(suma==need)
              {
                   if(count<3)
                   {
                              suma=0;
                   }
         
                  count++;
              }
             
         }
         cout << suma << count;
         if(suma==0 && count >=3)
         {
              return true;
         }
        else{
            return false;
        }
         
//              return true;
    }
};