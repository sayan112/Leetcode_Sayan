class Solution {
public:
    long long smallestNumber(long long num) {
         if(num==0)
         {
             return 0;
         }
 if ( num >0)
 {
     
     
     vector<int>need;
     
     while(num)
     {
         int i=num%10;
         need.push_back(i);
          num=num/10;
     }
   sort(need.begin(),need.end());
//      for(auto elem : need)
//      {
//          cout << elem;
//      }
     
     string m;
     
     if(need[0]!=0)
     {
         for(auto elem : need)
         {
              m+=elem+'0';
         }
         
          long long  real= stoll(m);
         cout << real;
              
     return  real;
     }
     else{
         
          int final=-1;
         
          for(int i=0; i < need.size(); i++)
          {
               if(need[i]==0)
               {
                   final=i;
               }
              else{
                  break;
              }
          }
         m+=need[final+1]+'0';
         
                for(int i=0; i <=final; i++)
          {
                    m+= need[i]+'0';
             
          }
                  for(int i=final+2; i <need.size(); i++)
          {
                    m+= need[i]+'0';
             
          }
              
         long long  real= stoll(m);
              
     return  real;
         
         
         
         
         
         
     }
     
     
     
     
     
 }
        else{
            
             // int  num =num*-1;
             long long  mini= num *-1;
            
            cout << mini << endl ;
                 vector<int>need;
     
     while(mini)
     {
         int i=mini%10;
         // cout << i ;
         need.push_back(i);
         mini=mini/10;
     }
   sort(need.begin(),need.end(),greater<int>());
     for(auto elem : need)
     {
         cout << elem;
     }
            
            string m;
            
                     for(auto elem : need)
         {
              m+=elem+'0';
         }
         
          long long real= stoll(m);
         cout << real;
              
     return real*-1;
            
            
            
            
            
            
            
            
            
            
            
            
        }
        
        
        
        
    }
        
 

};