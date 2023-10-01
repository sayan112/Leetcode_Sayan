class Solution {
public:
    string reverseWords(string s) {
        vector<string>need;
         string hey="";
         for(auto elem : s )
         {
              if(elem!=' ')
              {
                        hey+=elem;
              }
             else{
                 need.push_back(hey);
                 hey="";
             }
         }
         if(hey.size()>0)
         {
             need.push_back(hey);
         }
         for(auto &elem : need)
         {
            reverse(elem.begin(),elem.end());
         }
        
         string ans;
          for(auto &elem : need)
         {
            ans+=elem;
              ans+=' ';
         }
        ans.pop_back();
         return ans;
    }
};