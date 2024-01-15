class Solution
{
    public:
        long long pickGifts(vector<int> &gifts, int k)
        {
            vector<int> vec;
            priority_queue<int> pq;
            for (int i = 0; i < gifts.size(); i++)
            {
                pq.push(gifts[i]);
            }

            while (pq.size() && k--)
            {
                int need = floor(sqrt(pq.top()));
                pq.pop();
                pq.push(need);
            }
            long long sum = 0;
            while (pq.size())
            {
                sum += pq.top();
                pq.pop();
            }

            return sum;
        }
};