class Solution {  //Runtime: 0 ms, faster than 100.00% of C++ online submissions for Baseball Game.
                  //Memory Usage: 8.3 MB, less than 95.60% of C++ online submissions for Baseball Game.
public:
    int calPoints(vector<string>& ops) 
    {
        int ans = 0;                  //Answer Variable
        stack<int> st;                //Stack to store the records
        for(string s: ops)
        {
            if(s == "C")              //If C, Remove the last element
                st.pop();
            else if(s == "D")         //If D push twice the last enterred element
                st.push(st.top()*2);
            else if(s == "+")         //If the +
            {
                int x = st.top();     //Get the last element
                st.pop();             //Pop it
                int y = st.top() + x; //Store the second Last element and Add the last element to it
                st.push(x);           //Push the last element
                st.push(y);           //push the sum to it
            }
            else
                st.push(stoi(s));      //Else convert the string and push it into the stack
        }
        while(!st.empty())             //Add the elements
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};