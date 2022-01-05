class Solution {
public:
    vector<int> diStringMatch(string s) {
 
int In=0;
 int Dn= s.size();
   vector<int>ans;
   for (int i = 0; i < s.size(); i++)
   {
         if(s[i]=='I')
         {
             ans.push_back(In);
              In++;
               if(i+1==s.size())
               {
                      ans.push_back(In);
               }
         }
         else
         {
              ans.push_back(Dn);
              Dn--;
               if(i+1==s.size())
               {
                      ans.push_back(Dn);
               }
         }
         
   }

       
      

     
 return ans ;

   



    
    }
};