class Solution
{
    public:
        void solve(vector<string> &ans, int open, int close, string need)
        {

            if (open == 0 && close == 0)
            {
                ans.push_back(need);
            }
             if(open!=0)
             {
                string need2=need;
                  need2+='(';
                        solve(ans, open-1, close, need2);  
             }
             if(close>open)
             {
                 string need1=need;
                  need1+=')';
                        solve(ans, open, close-1, need1);
             }
           
        }
    vector<string> generateParenthesis(int n)
    {

        vector<string> ans;
        int open = n;
        int close = n;
        string need;
        solve(ans, open, close, need);
        return ans;
    }
};