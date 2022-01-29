class Solution {
public:
    bool canBeValid(string s, string locked) {
        // so we have to itreate at first right to left and then left to right 
    if(s.size()%2!=0)
    {
         return false;
    }
             // "))())("
             // "010100"
            int lockclose =0;
             int lockopen =0;
         int free =0; 
            // so at first we have to check form right to left 
          for(int i=0 ; i < s.size(); i++)
          {
              if(locked[i]=='0')
              {
                  free++;
              }
              else{
                   if(s[i]==')')
                   {
                       lockclose++;
                   }
                  else{
                      lockopen++;
                  }
              }
                         if( lockclose>lockopen +free)
        {
             return false;
        }
          }
  
         cout << free <<" " << lockclose << " " << lockopen ;
            lockclose =0;
             lockopen =0;
         free =0; 
         // then we have to check from left to right 
               for(int i=s.size()-1 ; i >=0 ; i--)
          {
              if(locked[i]=='0')
              {
                  free++;
              }
              else{
                   if(s[i]==')')
                   {
                       lockclose++;
                   }
                  else{
                      lockopen++;
                  }
              }
                       if( lockopen>lockclose +free)
        {
             return false;
        }
          }   
         
             cout << free <<" " << lockclose << " " << lockopen ;
    
        
        return true; 
            
            
        
    }
};