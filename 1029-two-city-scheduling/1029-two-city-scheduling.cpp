class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int need=0;
     
         for(int i=0; i < costs.size();i++)
         {
            
                   need+=costs[i][0];

             
         }
        vector<int>p;
        
           for(int i=0; i < costs.size();i++)
         {
            p.push_back(costs[i][1]-costs[i][0]);
              
             
         }
        
        for(auto elem : p)
        {
            cout <<elem<<" ";
        }
        
        sort(p.begin(),p.end());
    
int n = costs.size()/2;
        int ct=0;
    
      
            for(auto elem : p)
            {
                   ct++;
                         need+=elem;
                if(ct==n)
                {
                     return need;
                }
                
             
            }

    
        
        return need;
        
        
        
        
        
        
    }
};