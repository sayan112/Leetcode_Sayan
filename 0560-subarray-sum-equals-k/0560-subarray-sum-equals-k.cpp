class Solution
{
    public:
        int subarraySum(vector<int> &A, int k)
        {

            unordered_map<int,int>mp;
             mp[0]=1;
             int sum =0;
             int count =0;
             for(auto elem : A)
             {
                 sum+=elem;
                  count+=mp[sum-k];
                  mp[sum]++;
                 
             }
             return count ;
        }
};