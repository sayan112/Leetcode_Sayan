class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
 int mnum =  m-1;
 int nnum = n-1;
int ik = m+n-1;
  
   while (nnum >=0)
   {
       if(mnum>=0 &&    nums1[mnum]>nums2[nnum]    )
       {
           nums1[ik]= nums1[mnum];
           mnum--;
           ik--;
       }
       else
       {
           nums1[ik]=nums2[nnum];
           nnum--;
           ik--;
       }
       
   }
   
    }
};