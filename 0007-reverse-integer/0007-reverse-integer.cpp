class Solution {
public:
    int reverse(int x) {
         if(x>0)
         {
              string str= to_string(x);
              cout << str <<endl;
              std::reverse(str.begin(),str.end());
             if(INT_MAX<stoll(str))
             {
                 return 0;
             }
              return stoll(str);
         }
        else{
             string str= to_string(x);
         
              std::reverse(str.begin(),str.end());
            
              if(INT_MIN>stoll(str)*-1)
             {
                 return 0;
             }
              return stoll(str)*-1;
             
        }
         return 0;
    }
};