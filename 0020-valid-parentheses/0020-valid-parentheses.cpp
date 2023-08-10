class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> st;
            for (auto elem: s)
            {
                if (elem == '(' || elem == '{' || elem == '[')
                {
                    st.push(elem);
                }
                else
                {
                    if (st.size())
                    {

                        char check = st.top();
                        st.pop();
                        if ((check == '(' && elem == ')') || (check == '{' && elem == '}') || (check == '[' && elem == ']'))
                        {
                            continue;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if (st.size())
            {
                return false;
            }
            return true;
        }
};