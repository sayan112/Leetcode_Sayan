class Solution
{
    public:
        int findKthLargest(vector<int> &nums, int k)
        {
 priority_queue<int>pq;
             for(auto elem : nums)
             {
                 pq.push(-elem);
                 if(pq.size()>k)
                 {
                     pq.pop();
                 }
             }
             return (pq.top())*-1;
        }
};