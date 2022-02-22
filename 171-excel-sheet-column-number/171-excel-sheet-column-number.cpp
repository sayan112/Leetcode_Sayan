class Solution {
public:
    int titleToNumber(string c) {
        int need=0;
         for(auto elem : c)
         { 
              int num=((elem-'A')+1);
             cout << num << endl;
             need=need*26 +num;
              
         }
         return need;
    }
};