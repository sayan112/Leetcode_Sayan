class Solution
{
    public:
        int strStr(string haystack, string needle)
        {

            for (int i = 0; i < haystack.size(); i++)
            {
                if (needle[0] == haystack[i])
                {
                    int start1 = i + 1;
                    int start2 = 1;
                     bool check=true;
                    cout <<start1<<" "<< start2<<endl;
                    while (needle.size() != start2)
                    {
                        if (needle[start2] != haystack[start1])
                        {
                             cout << needle[start2]<<" "<< haystack[start1] ; 
                            check=false;
                            break;
                            
                            
                        }
                        start1++;
                        start2++;
                    }
                     if(check)
                     {
                           return i;
                     }
                
                }
            }
             return -1;
        }
};