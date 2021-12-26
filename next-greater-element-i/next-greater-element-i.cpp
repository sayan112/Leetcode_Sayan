class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//      Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
       
        
//              [1,3,4,2]
//  newstore    [3, 4 ,-1,-1 ]
        
//         [        ,3,4 ]
//        1 [ ]
        
        
        
         int newstore[nums2.size()];
 stack<int>mpst;
  mpst.push(nums2[nums2.size()-1]);
  newstore[nums2.size()-1]=-1;
   for (int i = nums2.size()-2; i >=0 ; i--)
   {
       while ( mpst.size()>0 && nums2[i] >=mpst.top() )
       {
            mpst.pop();
       }
        if(mpst.size()==0)
        {
             newstore[i]=-1;
        }
        else
        {
            newstore[i]=mpst.top();
        }

          mpst.push(nums2[i]);
       
   }
    
 unordered_map<int,int>mp;
    for (int i = 0; i < nums2.size(); i++)
    {
        mp[nums2[i]]= newstore[i];
    }
     vector<int>f;
      for ( int i = 0; i <  nums1.size(); i++)
      {
          auto it = mp.find(nums1[i]);
           f.push_back(it->second );
      }
   

 return f;

    }
};