class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int start1=0;
         int start2=0;
         int arridx=0;
         vector<int>need(n+m,0);
         while(start1<m && start2<n)
         {
       
             if(nums1[start1]<=nums2[start2])
             {
                  need[arridx]=nums1[start1];
         
                 start1++;
                 
             }
             else{
                      need[arridx]=nums2[start2];
                  start2++;
             }
             arridx++;
         }
      
         if(start1>=m)
         {
             for(int i=start2;i<nums2.size();i++)
             {
                 need[arridx]=nums2[i];
                 arridx++;
             }
         }
          if(start2>=n)
         {
             for(int i=start1;i<m;i++)
             {
                 need[arridx]=nums1[i];
                 arridx++;
             }
         }
         for(auto elem : need)
         {
              cout << elem;
         }
       
         for(int i=0;i<nums1.size();i++)
             {
                nums1[i]=need[i];
             }
      
    }
};