class Solution
{
    public:
        string largestOddNumber(string num)
        {
        
            int breakpoint = -1;
            for (int i = num.size() - 1; i >= 0; i--)
            {
                if ((num[i] - '0') % 2 != 0)
                {
                    breakpoint = i;
                    break;
                }
            }
            

           
          cout << breakpoint<<endl;
             if (breakpoint == -1)
            {
                return "";
            }
            
             string hey = num.substr(0,breakpoint+1);
             return hey;
              
        }
};