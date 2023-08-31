class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string need1;
         for(auto elem : firstWord)
         {
         need1+= (int(elem)-97)+'0';
             
         }
        string need2;
           for(auto elem : secondWord)
         {
         need2+= (int(elem)-97)+'0';
             
         }
        
        string need3;
        
             for(auto elem : targetWord)
         {
         need3+= (int(elem)-97)+'0';
             
         }
       //  cout << need1<<" "<< need2<<" "<< need3<<endl;
        
         int need1int= stoi(need1);
        int need2int=stoi(need2);
         int need3int=stoi(need3);
        
        
         return (need1int+need2int)==(need3int);
    }
};