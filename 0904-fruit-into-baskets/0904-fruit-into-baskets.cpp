class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
            unordered_map<int,int>check;
         for(auto elem : fruits)
         {
             check[elem]++;
         }
         if(check.size()<=2)
         {
              return fruits.size();
         }
              int i=0;
         int j =0;
         int longestsubstr=0;
         unordered_map<int,int>mp;
         while(j<fruits.size())
         {
             mp[fruits[j]]++;
              if(2>mp.size())
              {
                  j++;
              }
             else if(2==mp.size())
             {
              longestsubstr=max(longestsubstr,j-i+1);   
                 j++;
             }
             else {
                 while(2<mp.size())
                 {
                   mp[fruits[i]]--;
                     if(mp[fruits[i]]==0)
                     {
                         mp.erase(fruits[i]);
                     }
                     i++;
                     
                 }
                 j++;
             }
          
          
         }
            return longestsubstr;  
    }
};