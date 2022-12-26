class Solution {
public:
    int countPrimes(int n) {
       
        vector<bool>need(n+1,false);
         need[0]=true;
        need[1]=true;
        
         for(int i =2;i<=sqrt(n);i++)
         {
             if(!need[i])
             {
                  for(int j =i*i;j<=n;j+=i)
         {
                      need[j]=true;
                  }
             }
             
         }
         int count =0;
     for(int i=2;i<n;i++)
     {
         if(!need[i])
         {
             count++;
         }
     }
         return count;
    }
};