class Solution {
public:
    // ideal testcase ~ word2 ~  ["ee","oco","ceo"]
    // fo u have to find eeooc
    bool  ispresent (string str , string checkstr)
    {
        unordered_map<char,int>mp;
        for(auto elem : str)
        {
            mp[elem]++;
        }
        for(int i=0;i<checkstr.size();i++)
        {
            if(mp.find(checkstr[i])!=mp.end())
            {
                mp[checkstr[i]]--;
                 if(mp[checkstr[i]]<0)
                 {
                     return false;
                 }
            }
            else{
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
     vector<string>ans;
        unordered_map<char,int>mp;
         for(auto elem : words2)
         {
               unordered_map<char,int>mp1;
             for(int i=0;i<elem.size();i++)
             {
                
                 mp1[elem[i]]++;
                mp[elem[i]]=max(mp[elem[i]],mp1[elem[i]]);
                 
             }
         }
             string need;
        for(auto elem : mp)
        {
            int check=elem.second;
           while(check--)
           {
               need+=elem.first;
           }
        }
        
        
        for(auto elem : words1)
        {
            if(ispresent(elem,need))
            {
             ans.push_back(elem);   
            }
        }
   

        
         return ans;
    }
};