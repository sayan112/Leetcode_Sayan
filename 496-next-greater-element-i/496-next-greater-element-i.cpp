class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // [1,3,4,2]
        // ans -> [3,4,-1,-1]
        vector<int>ans;
        for(int i=0;i<nums2.size();i++)
        {
              bool check = false;
              for(int j=i;j<nums2.size();j++)
        {
                
            if(nums2[i]<nums2[j])
            {
                ans.push_back(nums2[j]);
                check=true;
                break;
            }
                 
                  
        }
             if(!check)
                  {
                      ans.push_back(-1);
                  }
        }
        vector<int>ans1;
         for(auto elem : nums1)
         {
             for(int i=0; i<nums2.size();i++ )
             {
                 if(nums2[i]==elem)
                 {
                     ans1.push_back(ans[i]);
                 }
             }
         }
        
        
         return ans1 ; 
        
        
        
    }
};