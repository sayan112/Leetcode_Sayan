class Solution {
public:
     int miniCost(vector<int>&cost,int idx,  unordered_map<int,int>&mp)
     {
              if(idx == cost.size()){
            return 0;
        }
        
        if(idx > cost.size()){
            return 0;
        }
                  
        int currentKey = idx;
        
        if(mp.find(currentKey)!= mp.end()){
            return mp[currentKey];
        }
   
         
              int onestep= miniCost(cost, idx+1,mp)+cost[idx];
              int secondstep= miniCost(cost, idx+2,mp)+ cost[idx];
         int ans =  min( onestep, secondstep);
         mp[currentKey]=ans;
          return ans;
         
     }
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>mp;
       return min(miniCost(cost, 0,mp), miniCost(cost, 1,mp));
    }
};