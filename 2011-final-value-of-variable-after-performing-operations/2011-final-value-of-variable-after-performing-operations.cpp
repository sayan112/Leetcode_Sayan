class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
         int need=0;
    for(auto elem : operations)
    {
        if(elem[0]=='-' ||elem[elem.size()-1]=='-' )
        {
            need--;
        }
             if(elem[0]=='+' ||elem[elem.size()-1]=='+' )
        {
            need++;
        }
    }
         return need;
    }
};