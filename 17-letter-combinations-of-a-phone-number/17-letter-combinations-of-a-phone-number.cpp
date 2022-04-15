class Solution {
public:
    
      vector<string>help( unordered_map<int,string>&mp, int i, string &d)
      {
          if(i==d.size())
          
             return {""} ;
          
          vector<string>temp=help(mp,i+1,d);
          vector<string>ans;
          for(auto elem: mp[d[i]-'0'])
          {
              for(auto elem2: temp)
              {
                  ans.push_back(elem+elem2);
              }
          }
          return ans ;
          
      }
    
    
    
    vector<string> letterCombinations(string digits) {
   
        unordered_map<int,string>mp;
        mp[2]="abc";
      mp[3]="def";
mp[4]="ghi";  mp[5]="jkl";  mp[6]="mno";  mp[7]="pqrs";
          mp[8]="tuv";
          mp[9]="wxyz";
         vector<string>need;
          if(digits=="")
     {
         return need;
     }
            if(digits.size()==1)
            {
                  if(digits[0]=='1')
            {
                return  need;
            }
            }
         return help(mp,0,digits);
        
        
        
    }
};