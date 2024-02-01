class Solution
{
    public:
        int subarraySum(vector<int> &num, int k)
        {
             int count =0;
                for(int i=0;i<num.size();i++)
                {
                     int sum =0;
                           for(int j=i;j<num.size();j++)
                {
                    sum+=num[j];
                                if(sum==k)
                     {
                         count++;
                     }
                }
                    
                }
             return count; 
        }
};