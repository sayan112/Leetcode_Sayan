class Solution {
public:
    int titleToNumber(string c) {
        int need=0;
         int number= c.size()-1;
         for(auto elem : c)
         { 
              int num=((elem-'A')+1);
             need+= num*(pow(26,number)); 
                         number--;
             
              
         }
         return need;
    }
};