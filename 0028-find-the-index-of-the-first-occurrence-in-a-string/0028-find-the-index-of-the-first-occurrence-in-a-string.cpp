class Solution {
public:
    int strStr(string haystack, string needle) {
 
        
        
         int n=haystack.size();
         int m = needle.size();
         if(m==0)
         {
              return 0;
         }
        int i =0;
         int j =0;
        
        while(i<n)
        {
            if(haystack[i]==needle[j])
            {
              int idx =i;
                 int k =i;
                 while(haystack[k]==needle[j]&& j<m)
                 {
                     k++;
                     j++;
                 }
                 if(j==m)
                 {
                      return idx;
                 }
                else{
                      j=0;
                }
            }
           
            i++;
        }
         return -1;
    }
};