class Solution
{
    public:
        int secondsToRemoveOccurrences(string s)
        {
            int count = 0;
            int zero = 0;
            int one = 0;
            for (auto elem: s)
            {
                if (elem == '0')
                {
                    zero++;
                }
                else
                {
                    one++;
                }
            }
            string need;

            while (one--)
            {
                need += '1';
            }
            while (zero--)
            {
                need += '0';
            }
if(need==s)
{
    return 0;
}
            while (true)
            {

                for (int i = 1; i < s.size(); i++)
                {

                    if (s[i - 1] == '0' && s[i] == '1')
                    {
                        swap(s[i - 1], s[i]);

                        i++;
                    }
                 
                }
                
               
                count++;
                 if (need == s)
                {
                    return count;
                }
          
            }
                return count;
        }
              
        };