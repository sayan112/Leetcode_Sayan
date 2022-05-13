class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
   
             priority_queue<pair<int, pair<int, int>>> pq;
        for( int i=0; i <points.size() ;i++)
        {
            pq.push({((points[i][0]*points[i][0])+ (points[i][1]*points[i][1])), {points[i][0],points[i][1]}});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        points.clear();
    
         while(pq.size()!=0)
         {
                vector<int>ans2;
             auto elem = pq.top().second;
             ans2.push_back(elem.first);
              ans2.push_back(elem.second);
           points.push_back(ans2);
             pq.pop();
             
         }
        
        
        
        
         return points;
    }
};