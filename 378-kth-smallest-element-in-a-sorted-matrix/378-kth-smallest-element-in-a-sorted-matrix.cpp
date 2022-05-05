class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         vector<int>vec;
         for(int i=0; i < matrix.size();i++)
         {
              for(int j=0; j < matrix[0].size();j++)
         {
             vec.push_back(matrix[i][j]);
         } 
         }
        
   
         priority_queue <int> pq;
         for(auto elem : vec)
         {
              pq.push(elem);
              if(pq.size()>k)
              {
                  pq.pop();
              }
         }
         return pq.top();
        
    }
};