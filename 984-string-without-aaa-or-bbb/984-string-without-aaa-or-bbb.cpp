class Solution {
public:
    string strWithout3a3b(int a, int b) {
        
        string s ;
       if(a>b)
        {
            while(a!=0 )
            {
                s+='a';
                       a--;
                
                if(a>b)
                {
                  s+='a';
                       a--;
                }
               
    if(b!=0)
    {
         s+='b';
         
          
                b--;
    }
               
              
            }
        
            
        }
        else if(b>a) {
              while(b!=0 )
            {
                  
                s+='b';
                       b--;
//                   cout << b << " " << a << endl;
                
                if(b>a)
                {
                  s+='b';
                       b--;
                    
                }
               
    if(a!=0)
    {
         s+='a';
         
          
                a--;
    }
               
              
            }
            
        }
        else if(a==b)
        {
            int n=a+b;
              for(int i=0; i<n/2;i++)
            {
            s+='a';
                  s+='b';
            }
            
        }
        return s ;
        
        
    }
};