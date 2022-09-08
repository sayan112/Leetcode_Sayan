class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
       unordered_map<char,int>mp;
         for(int i =0; i <s.size();i++ )
         {
             if(mp.find(s[i])==mp.end())
             {
                 mp[s[i]]=i;
             }
             else{
                int need = distance[s[i]-97];
                // cout << need;
                //  cout << " ";
                int space= i-mp[s[i]];
                  if(space-need!=1)
                  {
                       return false;
                  }
                 
                  
             }
         }
        
        // for(auto elem : mp)
        // {
        //      cout << elem.first<<" "<< elem.second;
        // }
         return true;
        
    }
};