class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
     priority_queue<int>pq;
        for(auto elem : matrix)
        {
            for(auto elem1 : elem)
            {
                pq.push(elem1);
                 if(k<pq.size())
                 {
                     pq.pop();
                 }
            }
        }
         return pq.top();
    }
};