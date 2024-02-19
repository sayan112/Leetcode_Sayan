class Solution {
public:
    bool isHappy(int n) {
         unordered_map<int,int>mp;
        while(n!=1)
        {
             int sum =0;
             int need=n;
             while(need!=0)
             {
                 sum+=(need%10)*(need%10);
                 need=need/10;
             }
             if(mp.find(sum)==mp.end())
             {
                        mp[sum]++;
             }
            else{
                 return false;
            }
        n=sum;
            
        }
         return true;
    }
};