class Solution {
public:
    bool detectCapitalUse(string word) {
        
         int countupper=0;
           int countlower=0;
         for(auto elem : word)
         {
              if(isupper(elem))
              {
                  countupper++;
              }
             else{
                 countlower++;
             }
         }
         if(countlower==word.size())
         {
              return true;
         }
        else if(countupper==word.size()){
             return true;
        }
        else{
            if(isupper(word[0]))
            {
                if(word.size()-1==countlower)
                {
                     return true;
                }
            }
        }
         return false;
    
        }
};