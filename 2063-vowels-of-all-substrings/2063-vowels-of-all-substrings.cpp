class Solution
{
    public:
        long long countVowels(string str)
        {

            int n = str.length();
            long long count = 0;
            for (int i = 0; i < str.size(); i++)
            {

                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                {
                    count += (long long)(i + 1) *(long long)(n - i);
                }
            }

            return count;
        }
};