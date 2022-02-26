class Solution {
public:
   bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return true;
    }
 
    return false;
}
    int numOfStrings(vector<string>& p, string word) {
     
        
        
        int count =0 ; 
         for(auto elem : p)
         {
               if (isSubstring(elem,word))
               {
                    count++;
               }
         }
        
        return count ;
  
        
              
        
    }
};