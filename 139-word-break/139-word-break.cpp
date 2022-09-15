class Solution {
public:
      int    checkispresent (      unordered_map<string,int>&store , int idx , string s,   unordered_map<int ,int>&mp )
      {
          
           if(idx==s.size())
           {
                return 1;
           }
           string temp ;
          
          int curIdx= idx;
           if(mp.find(curIdx)!=mp.end())
           {
                return mp[curIdx];
           }
           for(int j =idx; j< s.size();j++)
           {
                temp+=s[j];
                if(store.find(temp)!=store.end())
                {
                      if(checkispresent(store,j+1,s,mp))
                      {
                          mp[curIdx]= 1;
                           return mp[curIdx];
                      }
                }
           }
            mp[curIdx]= 0;
                           return mp[curIdx];
      }
    
    bool wordBreak(string s,  vector<string>& wordDict) {
        
           unordered_map<string,int>store;
          unordered_map<int ,int>mp;
         for(auto elem : wordDict)
         {
              store[elem]++;
         }
         int idx =0;
        
  if( checkispresent(store,idx,s,mp))
  {
       return true;
  }
        else{
             return false;
        }
        
        
        
    }
  
    
};