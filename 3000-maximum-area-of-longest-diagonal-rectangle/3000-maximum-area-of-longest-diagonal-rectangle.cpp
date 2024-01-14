class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
         vector<double>vec1;
         for(auto elem : dimensions )
         {
              int s1=elem[0]*elem[0];
             int s2=elem[1]*elem[1];
              double ans=sqrt(s1+s2);
            
             vec1.push_back(ans); 
            
         }
         double maxi = *max_element(vec1.begin(),vec1.end());
       priority_queue<int>pq;
         for(int i =0;i<vec1.size();i++)
         {
             if(maxi==vec1[i])
             {
                pq.push({dimensions[i][0]*dimensions[i][1]});
             }
         }
         return pq.top();
        
        
    }
};