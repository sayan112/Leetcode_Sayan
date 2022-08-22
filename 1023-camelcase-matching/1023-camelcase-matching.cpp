class Solution {
public:
     bool check_true_or_false(string queries, string pattern)
     {
          int idx=0;
         for(auto elem : queries)
         {
             if((elem>='A' && elem<='X') && elem!=pattern[idx])
             {
                 return false;
             }
             else if(elem==pattern[idx])
             {
                 idx++;
             }
         }
        if(pattern.size()==idx)
        {
            return true;
        }
         else{
             return false;
         }
     }
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
       
    vector<bool>ans ;
         for(auto elem : queries)
         {
             ans.push_back(check_true_or_false(elem,pattern));
         }
         return ans;
    }
};