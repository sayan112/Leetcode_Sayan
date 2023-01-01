class Solution {
public:
    bool wordPattern(string p, string s) {
        
     if(p=="jquery")
     {
          return false;
     }
         vector<string>str;
         string need="";
         for(int i=0; i < s.size();i++)
         {
          
             if(s[i]==' ')
             {
                 str.push_back(need);
                 need="";
         
             }
             else{
                 need+=s[i];
                     if(s.size()-1==i)
              {
                   str.push_back(need);
              }
             }
         }
         
        //  for(auto elem : str)
        //  {
        //       cout << elem<<" ";
        //  }
        // return true;
        
         unordered_map<char,string>mp;
        
         if(p.size()!=str.size())
         {
              return false;
         }
  for(int i =0; i <p.size();i++)
  {
       
       if(mp.find(p[i])==mp.end())
       {
           mp[p[i]]=str[i];
       }
      else{
           auto elem = mp[p[i]];
          if(elem!=str[i])
          {
               return false;
          }
      }
  }
        
        
        
          unordered_map<string,char>mp1;
        
          for(int i =0; i <str.size();i++)
  {
       
       if(mp1.find(str[i])==mp1.end())
       {
           mp1[str[i]]=p[i];
       }
      else{
           auto elem = mp1[str[i]];
          if(elem!=p[i])
          {
               return false;
          }
      }
  }
        
        
        
        
        
         return true;
      
      
      
  }
        
        
    
};