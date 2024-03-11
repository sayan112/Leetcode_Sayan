class Solution {
public:
    bool isPalindrome(int x) {
     
         string str= to_string (x);
         int start =0;
         int end = str.size()-1;
        while(end>=start)
        {
             if(str[end]!=str[start])
             {
                  return false;
             }
            end--;
            start++;
        }
         return true;
    }
};