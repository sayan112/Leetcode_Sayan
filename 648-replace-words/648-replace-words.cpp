class Solution
{
    public:
        string replaceWords(vector<string> &dictionary, string sentence)
        {

            unordered_set<string> st;
            for (auto elem: dictionary)
            {
                st.insert(elem);
            }
            string cur = "";
            string ans = "";
            bool check = false;
            for (int i = 0; i <=sentence.size(); i++)
            {
                if (sentence[i] == ' ' || sentence.size()==i)
                {
                    ans += cur;
                    cur = "";
                    ans += ' ';
                     check=false;
                }
                else if (!check)
                {
                    cur += sentence[i];

                    if (st.find(cur) != st.end())
                    {
                     
                        check = true;
                    }
                }
            }
            
            ans.pop_back();
             return ans ; 
        }
};