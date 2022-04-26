class Solution {
public:
    int maxCoins(vector<int>& p) {
        sort(p.begin(),p.end());
        int end =p.size()-1;
        int need=0;
        int start=0;
        while(start<end)
        {
            
            
            end--;
            need+=p[end];
          
            end--;
             start++;
            
            
        }
        
        return need;
        
    }
};