class Solution {
public:
        static bool cmp(pair<int,int>&a, pair<int,int>&b){
        return a.second>b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
         for(auto elem : nums)
         {
             mp[elem]++;
         }
         vector<pair<int,int>>pairfeq;

         for(auto elem : mp)
         {
              pairfeq.push_back({elem.first,elem.second});
         }
         
        sort(pairfeq.begin(),pairfeq.end(),cmp);
         for(auto elem : pairfeq)
         {
              cout << elem.first << " "<<elem.second <<endl; 
         }
        
        vector<int>ans;
      
         for(auto elem:pairfeq )
         {
             k--;
              ans.push_back(elem.first);
             if(k==0)
             {
                  return ans;
             }
             
         }
         return ans;
        
        
        
    }
};