class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
      vector<int>ans1;
         for(auto elem : points)
         {
              int need=0;
              for(auto elem1 : elem)
              {
                  need+=elem1*elem1;
              }
             ans1.push_back(need);
         }
         for(auto elem : ans1)
         {
             cout << elem <<" ";
         }
        
             priority_queue<pair<int, pair<int, int>>> pq;
        for( int i=0; i < ans1.size();i++)
        {
            pq.push({ans1[i], {points[i][0],points[i][1]}});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
         vector<vector<int>>finalans;
        
     
         while(pq.size()!=0)
         {
                vector<int>ans2;
             auto elem = pq.top().second;
             ans2.push_back(elem.first);
              ans2.push_back(elem.second);
           finalans.push_back(ans2);
             pq.pop();
             
         }
        
        
        
        
         return finalans ;
    }
};