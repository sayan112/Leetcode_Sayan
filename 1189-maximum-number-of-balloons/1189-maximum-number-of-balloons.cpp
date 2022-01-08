class Solution {
public:
    int maxNumberOfBalloons(string text) {
             
 unordered_map<char,int>mp;
          unordered_map<char,int>need;
          string need1 = "balloon" ; 
        
 for (int i = 0; i <  text.size(); i++)
 {
    mp[text[i]]++;

 }
 for (int i = 0; i <   need1.size(); i++)
 {
    need[need1[i]]++;

 }
int count = 0 ;
 int mini = INT_MAX; 
   for(auto elem : need)
   {

      if(mp[elem.first]>= elem.second)
      {
            count= mp[elem.first] /elem.second ; 
          mini = min(count,mini);
      }
      else
      {
     return 0 ; 
      }

   }
    return  mini ;

 

    }
};