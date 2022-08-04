class Solution
{
    public:
        int nthUglyNumber(int n)
        {
            vector<int> vec(n);
            vec[0] = 1;
            int i2 = 0;
            int i3 = 0;
            int i5 = 0;
            for (int i = 1; i <n; i++)
            {
                vec[i] = min(vec[i2]*2, min(vec[i3]*3, vec[i5]*5));
                if (vec[i] == vec[i2]*2)
                {
                    i2++;
                }
                 if (vec[i] == vec[i3]*3)
                {
                    i3++;
                }
                 if (vec[i] == vec[i5]*5)
                {
                    i5++;
                }
            }
            
        //     int t2 = 0, t3 = 0, t5 = 0; //pointers for 2, 3, 5
        // vector<int> k(n);
        // k[0] = 1;
        // for(int i  = 1; i < n ; i ++)
        // {
        //     k[i] = min(k[t2]*2,min(k[t3]*3,k[t5]*5));
        //     if(k[i] == k[t2]*2) t2++; 
        //     if(k[i] == k[t3]*3) t3++;
        //     if(k[i] == k[t5]*5) t5++;
        // }
        // return k[n-1];
           for(auto elem : vec)
           {
               cout << elem << endl ; 
           }
            return vec[n-1] ;
        }
};