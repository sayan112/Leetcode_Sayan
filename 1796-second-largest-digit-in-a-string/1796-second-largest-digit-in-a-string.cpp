class Solution {
public:
    int secondHighest(string s) {
        vector<int>need;
         for(auto elem : s )
         {
              if(elem>='0'&& elem<='9')
              {
                 need.push_back(elem-'0');  
              }
             
         }
        
        if(need.size()==0)
        {
             return -1;
        }
       int maxi = *max_element(need.begin(),need.end());
    
         int ansmax=INT_MIN;
         for(auto elem : need)
         {
              if(ansmax<elem)
              {
                   if(elem!=maxi)
                   {
                           ansmax=elem; 
                   }
             
              }
         }
        
         if(ansmax==INT_MIN)

         {
              return -1;
         }
        return ansmax ; 
    }
};