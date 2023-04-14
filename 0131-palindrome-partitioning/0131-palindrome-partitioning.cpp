class Solution
{
    public:

        vector<vector < string>> partition(string s)
        {
            vector<vector <string>> ans;
            vector<string> ds;
         
            solve(0,s, ds, ans);
            return ans;
        }

    void solve(int idx,string s,vector<string> &ds, vector<vector< string>> &ans)
    {
        if (s.size() == idx)
        {
            ans.push_back(ds);
            return;
        }
       
            for (int i = idx; i < s.size(); i++)
            {
                if (isPalindrome(s, idx, i))
                {
                    ds.push_back(s.substr(idx, i - idx + 1));
                    solve(i + 1, s, ds, ans);
                    ds.pop_back();
                }
            }
        
    }

    bool isPalindrome(string s, int start, int end)
    {
        int i = start, j = end;
        while (i < end)
        {
            if (s[i++] != s[j--])
                return false;
        }
        return true;
    }
};

