class Solution {
public:
    bool canWinNim(int n) {
        
        // Theorem: The first one who got the number that is multiple of 4 (i.e. n % 4 == 0) will lost, otherwise he/she will win.
        
      if(n%4==0)
      {
           return false;
      }
        else{
             return true;
        }
            
            
    }
};