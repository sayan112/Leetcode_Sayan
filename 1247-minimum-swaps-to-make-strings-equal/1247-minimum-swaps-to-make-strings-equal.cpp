class Solution
{
    public:
        int minimumSwap(string s1, string s2)
        {

           	// 0 1 
           	// 1 0 
           	// it takes 2 step

           	// 1 1 
           	// 0 0
           	// 1 0
           	// 1 0

           	// 0 0
           	// 1 1 
           	// takes 1 step 
           	// 1 0
           	// 1 0 

            int xy = 0;
            int yx = 0;

            for (int i = 0; i < s1.size(); i++)
            {
                if (s1[i] != s2[i])
                {
                    if (s1[i]  =='x' && s2[i]  == 'y')
                    {
                        xy++;
                    }
                    else if ( s2[i]  =='x' && s1[i]  == 'y')
                    {
                        yx++;
                    }
                        }
                
            }
            if((xy+yx) % 2!=0)
            {
                return -1;
            }
            else{
            
                return xy/2+yx/2+(xy%2)+(yx%2);
                
            
            }
            return 0;
        }
        };