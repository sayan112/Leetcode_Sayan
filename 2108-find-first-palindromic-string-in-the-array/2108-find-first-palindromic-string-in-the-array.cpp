class Solution {
public:
   bool palindrome(string s )
 {
    //   racecar 
    int start =0;
     int end = s.size()-1;
      while (end>start)
      {
        
         if(s[start]!=s[end])
         {
        return false;
         }
end--;
 start++;
      }
       return true;
      
       
 }
    
   string firstPalindrome(vector<string>& words) {
        
         for(auto elem : words)
         {
              string s = elem ; 
             if(palindrome(s))
             {
               return s ;    
             }
               
         }


 return "";

    }
};