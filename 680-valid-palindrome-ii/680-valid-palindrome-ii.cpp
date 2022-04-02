class Solution {
public:
    bool validPalindrome(string s) {
     int count1=0;
        int count2 =0;
        int start =0;
         int end = s.size()-1;
         while(end>start)
         {
              if(s[end]!=s[start])
              {
                   count1++;
                  start++;
              }
             else{
                  start++;
             end--;
             }
            
         }
           int star =0;
         int en = s.size()-1;
        
            while(en>star)
         {
              if(s[en]!=s[star])
              {
                   count2++;
                   en--;
              }
             else{
                  star++;
             en--;
             }
            
         }
     
     cout << count1 <<" "<< count2<<endl;
         if(count1==1 || count2==1)
         {
              return true;
         }
     if(count1==0 || count2==0)
       {
             return true;
        }
    
            return false;
    
        
    }

};