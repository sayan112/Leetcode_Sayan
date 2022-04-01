class Solution {
public:
     void  reverseString(vector<char>&s,int p=0) {
        int size= s.size();
        if(p>=size/2)
        {
            return ;
        }
         swap(s[p],s[size-p-1]);
        reverseString(s,p+1);
    }
};