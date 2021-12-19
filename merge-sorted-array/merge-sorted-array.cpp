class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=m-1,p2=n-1,i=m+n-1;
        
        while(p2>=0){
            if(p1>=0&&nums1[p1]>nums2[p2]){
                  cout << nums1[i] << nums1[p1]<<endl;
                nums1[i--]=nums1[p1--];
              
            }
            else{
                       cout << nums1[i] << nums2[p2]<<endl;
                nums1[i--]=nums2[p2--];
          
            }
        }
    }
};