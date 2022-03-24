class Solution {
public:
    int brokenCalc(int s, int t) {
        if(s>=t)
        {
            return s-t;
        }
        else{
            int count =0;
            while(s<t)
            {
                count++;
             if(t%2==0)
             {
                 t=t/2;
             }
                else{
                    t++;
                }
            }
            
            return (s-t)+count;
        }
    }
};