class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector <int> ans;
        int start = 0,end = s.length();
        for(int i=0;i<s.length();i++){
            if(s[i] == 'D'){
                ans.push_back(end);
                end--;
            }
            else{
                ans.push_back(start);
                start++;
            }
        }
        ans.push_back(start);
        return ans;
    }
};