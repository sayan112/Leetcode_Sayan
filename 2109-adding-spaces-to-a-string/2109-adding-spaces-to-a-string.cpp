class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
              
 string newi;
  int i=0; 
 for(int j=0; j<spaces.size();j++)
 {
 for ( ; i < s.size() ; i++)
 {
    
   if(spaces[j]== i )
   {
           newi+=" ";
        if(j!=spaces.size()-1)
        {
               break; 
          
        }
       else{
             newi+=s[i];
       }
    
        
   }
   else{
       newi+=s[i];
   }
    
    
 }
 
 }
      cout << newi ;
         return newi ; 
   
    }
};