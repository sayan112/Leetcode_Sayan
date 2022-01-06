class Solution {
public:
    int totalFruit(vector<int>&s) {

  int i =0;
  int  j =0;
map<int ,int>mp;
 int maxi = INT_MIN;
while (j<s.size())
{
     mp[s[j]]++;
     if (mp.size()<=2 )
       {
    maxi= max(maxi,(j-i+1));
j++;
         
       }
 else if (mp.size()>2 )
 {
      while(mp.size()>2)
      {
          
      
             mp[s[i]]--;
              if(mp[s[i]]==0)
              {
                 mp.erase(s[i]);
              }
               i++;

       }
       j++;

 }








 }
          return maxi;

    }
};