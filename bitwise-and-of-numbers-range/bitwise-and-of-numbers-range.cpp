class Solution {
public:
   int msb (int n )
 {
      int nx = 0 ; 
        while (n)
        {
            nx++;
             n/=2;

            /* code */
        }
        
         return nx-1;
 }
int  rangeBitwiseAnd(int m , int n )
{
    
     if(m==n)
     {
          return m ; 
     }
     int ans =0;
      while (m && n )
      {
            int j = msb(m);
      int k = msb(n);
      if(j!=k)
      {
           break;
      }
    
        ans+=(1<< j );
         m-=(1<<j);
         n-=(1<<k);
            
      
   
      

      }
        return ans ; 
      
}
};