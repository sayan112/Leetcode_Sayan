
class Solution {
public:
      struct Comp {
        bool operator()(const pair<int, string>& lhs, const pair<int, string>& rhs) const {
            if (lhs.first != rhs.first)
                return lhs.first < rhs.first;
            return lhs.second > rhs.second;
        } //for more info refer Resource#3 mentioned below
    };
      typedef pair<int,string> pi;
    vector<string> topKFrequent(vector<string>& words, int k) {
            vector<string>ans;
  
        unordered_map<string,int>mp;
           priority_queue<pi,vector<pi>,Comp>pq;
      for(auto elem : words)
      {
          mp[elem]++;
      }
        
         for(auto elem : mp)
         {
             pq.push({elem.second,elem.first});
         }
        while(k--)
        {
            pair<int,string>pi =pq.top();
        
          ans.push_back(pi.second);
            pq.pop();
        }
        return ans;
    }
};