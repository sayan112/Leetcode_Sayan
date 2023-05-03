class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>>ans;
         vector<int>vec1;
         for(auto elem : nums1)
         {
              bool check = false;
              for(auto elem1:nums2)
              {
                  if(elem==elem1)
                  {
                       check=true;
                  }
              }
             if(!check)
             {
                 vec1.push_back(elem);
             }
             
         }
        
           vector<int>vec2;
         for(auto elem : nums2)
         {
              bool check = false;
              for(auto elem1:nums1)
              {
                  if(elem==elem1)
                  {
                       check=true;
                  }
              }
             if(!check)
             {
                 vec2.push_back(elem);
             }
             
         }
        
        
         map<int,int>mp;
        for(auto elem: vec1 )
        {
            mp[elem]++;
        }
        vector<int>ans1;
        for(auto elem:mp )
        {
            ans1.push_back(elem.first);
        }
               map<int,int>mp1;
        for(auto elem: vec2 )
        {
            mp1[elem]++;
        }
        vector<int>ans2;
        for(auto elem:mp1 )
        {
            ans2.push_back(elem.first);
        }
         ans.push_back(ans1);
        ans.push_back(ans2);
         return ans ;
    }
};