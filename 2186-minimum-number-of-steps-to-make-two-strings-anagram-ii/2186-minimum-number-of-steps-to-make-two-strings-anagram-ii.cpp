class Solution {
public:
    int minSteps(string s, string t) {
     
         int realsize= s.size()+ t.size();
          unordered_map<char,int>mp1;
          unordered_map<char,int>mp2;
         for(int i=0 ; i < s.size();i++)
         {
             mp1[s[i]]++;
             
         }
            for(int i=0 ; i < t.size();i++)
         {
             mp2[t[i]]++;
             
         }
       
         int count =0;
         for ( int i =0 ; i <s.size();i++)
         {
             
             if(mp2.find(s[i])!= mp2.end())
             {
                 count++;
                 mp2[s[i]]--;
                  if(mp2[s[i]]==0)
                  {
                      mp2.erase(s[i]);
                  }
             }
             
         }
        
               for ( int i =0 ; i <t.size();i++)
         {
             
             if(mp1.find(t[i])!= mp1.end())
             {
                 count++;
                 mp1[t[i]]--;
                  if(mp1[t[i]]==0)
                  {
                      mp1.erase(t[i]);
                  }
             }
             
         }   
        return  realsize-count ;
        
        
    }
};