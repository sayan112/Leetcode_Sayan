class Solution {
public:
    string reverseWords(string s) {
        
        stack<string>stack;
          string need;
        string  check =" ";
      for (int i=0; i < s.size();i++)
      {
              string word;
            if(s[i]==' ') continue; //skip spaces
            while(i<s.size() && s[i]!=' ' ) { //store continuous letters into word
                word += s[i]; i++;
            }
            stack.push(word); //push word to the stack
      }
        
        
         
          while(stack.size()!=0)
          {
              need+=stack.top();
              if(stack.size()!=1)
              {
                     need+=" ";
              }
           
              stack.pop();
          }
        return need;
        
        
        
    }
};