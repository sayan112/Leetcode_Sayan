class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
          reverse(num2.begin(),num2.end());
         int ptr1=0;
         int ptr2=0;
     string ans;
        int carry=0;
         while(ptr1<num1.size()||ptr2<num2.size()||carry!=0)
         {
             int sum =0;
              if(ptr1<num1.size())
              {
                       sum+=num1[ptr1]-'0';
                  ptr1++;
              }
             
                   if(ptr2<num2.size())
              {
                       sum+=num2[ptr2]-'0';
                  ptr2++;
              }
              if(carry)
              {
                  sum+=carry;
              }
             ans+=sum%10+'0';
           carry=sum/10;
         }
         reverse(ans.begin(),ans.end());
        return ans;
        
    }
};