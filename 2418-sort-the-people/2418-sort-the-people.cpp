class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<int,string>>q;
        for(int i =0; i < names.size();i++)
        {
            q.push({heights[i],names[i]});
            
        }
         vector<string>vec;
         while(!q.empty())
         {
             vec.push_back(q.top().second);
            
             q.pop();
         }
         return vec;
         
    }
};