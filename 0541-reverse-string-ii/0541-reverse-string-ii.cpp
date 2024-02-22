class Solution {
public:
    string reverseStr(string s, int k) {
     
       if(s.size()<=k)
       {
            reverse(s.begin(),s.end());
            return s;
       }
         for(int i =0;i<s.size();i+=2*k)
         {
         if(i+k>s.size())
         {
              int idxbound =i+k-s.size();
             
                reverse(s.begin()+i , s.begin()+i+k-idxbound);
         }
             else{
                    reverse(s.begin()+i , s.begin()+i+k);
             }
         
             
         }
         return s;
    }
};