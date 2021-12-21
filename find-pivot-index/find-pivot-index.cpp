class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         vector<int>lefti;
     vector<int>righti;
     int n = nums.size();
     int  need=0;
      for (int i = 0; i < n; i++)
      {
          need+=nums[i];
        //   cout <<need;
           lefti.push_back(need);
      
      }
//        for(auto elem : lefti)
//        {
//            cout << elem << " ";
//        }
// cout <<endl;
 int  need1=0;
 for (int i = n-1; i >=0 ; i--)
      {
          need1+=nums[i];
        //   cout <<need;
           righti.push_back(need1);
      
      }
        reverse(righti.begin(), righti.end());
    //     for(auto elem : righti)
    //    {
    //        cout << elem << " ";
    //    }

         for (int i = 0; i < righti.size(); i++)
         {
              if(righti[i]==lefti[i])
              {
                   return i;
              }
         }
         return -1;
        
    }
};