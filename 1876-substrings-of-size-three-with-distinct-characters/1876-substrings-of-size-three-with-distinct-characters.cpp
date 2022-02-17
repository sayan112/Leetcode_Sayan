class Solution {
public:
    int countGoodSubstrings(string s) {
         int n = s.size();
        int i=0;
         int j = 0;
         unordered_map<char,int> need;
        
         int count =0;
         while( j < n )
         {
             need[s[j]]++;
              if (j-i+1<3)
              {
                   
                  j++;
              }
              else if ( j-i+1==3)
              {
                   for (auto elem : need)
                   {
                        cout << elem.first << " " << elem.second;
                   }
                  cout << endl;
                  if(need.size()==3)
                  {
                       count++;
                  }
                  
                  need[s[i]]--;
                   if (need[s[i]]==0)
                   {
                        need.erase(s[i]);
                   }

                  i++;
                  j++;
              }
           
             
         }
         return count ;
        
        
    }
};