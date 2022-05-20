class Solution {
public:
    
    int myAtoi(string s) {
         long long int  ans =0;
                int i=0;
        
          while(i<s.size()&&s[i]==' ')i++;
        
        s=s.substr(i);
     
        int sign=1;
        i=0;
        
         if(s[0]=='-')          
        {
         sign=-1;
             i=1;
        }
         if(s[0]=='+')
         {
              sign=1;
             i=1;
             
         }
        

         for ( ; i<s.size();i++)
         {
             if (  (s[0]==' ') ||  (!isdigit(s[i])) )
             {
                 break;
             }
             
            int need = s[i]-'0';
             
              if(need>=0 && need<=9)
              {
                     ans = ((ans*10)+need);
                
                 
                   if( sign==1 && (ans>INT_MAX) )
                   {
                        return INT_MAX;
                   }
                  else if ( sign==-1  && ((-1*ans)<INT_MIN) )
                  {
                       return INT_MIN;
                  }
              }
          
         }
     
     
        if(sign == 1)
        {
             return ans ;
        }
        else{
             return sign*ans;
        }
 
    }
};