class Solution
{
    public:
        int subarraySum(vector<int> &num, int k)
        {
            int sum =0;
             int count =0;
             unordered_map<int,int>mp;
             mp[0]=1;
             for(auto elem: num)
             {
                    sum+=elem;
                 if(mp.find(sum-k)!=mp.end())
                 {
                     count+=mp[sum-k];
                 }
              
                  mp[sum]++;
             }
             return count;
            
        }
};