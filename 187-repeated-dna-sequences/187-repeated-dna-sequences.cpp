class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
      unordered_map<string,int>mp;
        vector<string>vec;
        for(int i =0 ; i < s.size();i++)
        {
            string need;
         if(i+9<s.size())
         {
             
        
                  for(int j =i ; j <i+10;j++)
        {
          need+=s[j];
        }
              }
            
             if(need.size())
             {
                    mp[need]++;
             }
        
        
        }
        for(auto elem : mp)
        {
            if(elem.second>1)
            {
                vec.push_back(elem.first);
            }
        }
        return vec;
    }
};