class Solution
{
    public:
        void solve(vector<string> &ans, int open, int close, string need)
        {

            if (open == 0 && close == 0)
            {
                ans.push_back(need);
            }
            if (open != 0)
            {

                need += '(';
                solve(ans, open - 1, close, need);
                     need.pop_back();
            }
            if (close > open)
            {

                need += ')';
                solve(ans, open, close - 1, need);
                      need.pop_back();
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