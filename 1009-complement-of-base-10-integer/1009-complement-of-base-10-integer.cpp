 // bitwiseComplement

class Solution {
public:
    
    
string toBinary(unsigned n)
{
    if (n == 0) {
        return "";
    }
 
    return toBinary(n / 2) + to_string(n % 2);
}
    
    
    
  int   bitwiseComplement(int num) {

      if(num==0)
      {
          return 1 ; 
      }
      
//       turn number into binary string  
 string s =  toBinary(num);  

 string newi ;
 for(auto elem : s )
 {
     if(elem == '0')
     {
        newi+="1";
     }
     else
     {
         newi+="0";
     }
     
 }
      
 int number = stoi(newi, 0, 2);
 return number ;
  


    }};