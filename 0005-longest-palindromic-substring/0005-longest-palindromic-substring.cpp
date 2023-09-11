class Solution
{
    public:
        bool checkpalin ( string &s , int start , int end )
        {
            while(end>=start)
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
    string longestPalindrome(string s)
    {
         int sizepalin =0;
         int startidx=0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j<s.size(); j++)
            {
               
                    if (s[i] == s[j])
                    {
                        if (checkpalin(s, i, j)) {
                             if(sizepalin<j-i+1)
                             {
                                 sizepalin=j-i+1;
                                    startidx=i;  
                             }
                 
                             
                        
                        }
                    }
                }
            
        }
       cout << startidx <<" "<< sizepalin;

         return s.substr(startidx,sizepalin);
    }
};