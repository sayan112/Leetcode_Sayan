class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
//         int count =0;
//         for(int i=0; i < n; i++ )
//         {
            
//                 for(int j=0; j < n; j++ )
//         {
            
//                         for(int k=0; k < n; k++ )
//         {
            
//                                 for(int l=0; l < n; l++ )
//         {
//             if(nums1[i] + nums2[j] + nums3[k] + nums4[l]==0)
//             {
//                  count++;
//             }
//         }
//         }
//         }
//         }
//          return count ;
        
         unordered_map<int,int>mp;
         
     for(int i=0; i < n; i++ )
     {
           for(int j=0; j < n; j ++ )
           {
               int need = nums1[i]+nums2[j];
               mp[need]++;
           }
     }
         int count=0;
        
             for(int i=0; i < n; i++ )
     {
           for(int j=0; j < n; j ++ )
           {
               int need2= -1 * (nums3[i]+nums4[j]);
               if ( mp.find(need2 )!= mp.end() )
               {
                   count+=mp[need2];
               }
           }
     }
         return count ;
        
        
        
        
        
        
        
        
        
            
    }
};