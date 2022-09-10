class Solution {
public:
     string   reversefy ( string need)
     {
          int i =0;
          int j=need.size()-1;
          while(j>i)
          {
              swap(need[i],need[j]);
               i++;
               j--;
          }
          return need;
     }
    int reverse(int x) {
        
        string need= to_string(x);
         bool minus=true;
        
         if(need[0]=='-')
         {
              need.erase(0,1);
              minus=false;
         }
        string check= reversefy(need);
         
        cout << check;
   
        
         if(!minus)
         {
        if( INT_MIN>stoll(check)*-1)
        {
         return 0;   
        }
             return stoll(check)*-1;
             
         }
         if( INT_MAX<stoll(check))
        {
         return 0;   
        }
        return stoll(check);
    }
};