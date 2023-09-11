class Solution
{
    public:
        string reverseWords(string s)
        {
            string need;
            vector<string> ans;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ' ')
                {
                    need += s[i];
                }
                else
                {
                 if(need.size()>0)
                 {
                          ans.push_back(need);
                 }
               
                    need = "";
                }
            }
            if (need.size() > 0)
            {
                ans.push_back(need);
            }
             for(auto elem : ans )
             {
                  cout << elem <<" ";
             }
            cout <<endl;
           reverse(ans.begin(),ans.end());
             string ansstr;
             for(auto elem : ans)
             {
                 ansstr+=elem;
                 ansstr+=' ';
             }
             ansstr.pop_back();
            return ansstr;
        }
};