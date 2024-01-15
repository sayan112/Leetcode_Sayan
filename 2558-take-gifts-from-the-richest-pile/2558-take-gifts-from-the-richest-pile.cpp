class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        vector<int>vec;   
    priority_queue<pair<int,int>>pq;
         for(int i =0;i<gifts.size();i++)
         {
              pq.push({gifts[i],i});
         }
       
          while(pq.size()&&k)
          {
              int need = floor(sqrt(pq.top().first));
               int idx = pq.top().second;
               gifts[idx]=need;
              pq.pop();
              k--;
              pq.push({need,idx});
              
          }
         long long sum=0;
         for(auto elem : gifts)
         {
          sum+=elem;
         }        
       
        return sum;
        
        
  
    }
};