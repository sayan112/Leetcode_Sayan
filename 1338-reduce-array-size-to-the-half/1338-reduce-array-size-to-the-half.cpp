class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
         for(auto elem : arr)
         {
             mp[elem]++;
         }
         priority_queue<pair<int,int>>q;
        
        for(auto elem : mp)
        {
            q.push({elem.second , elem.first});
        }
        
         int count =0;
         int ans =0;
         while(count<arr.size()/2)
         {
             auto elem= q.top();
              q.pop();
             count+=elem.first;
             ans++;
             
         }
        return ans ; 
        
        
    }
};