
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
                  priority_queue <pair<int, string>> pq;
      for(auto elem : words)
      {
          mp[elem]++;
      }
        
         for(auto elem : mp)
         {
             pq.push({-elem.second,elem.first});
             if(pq.size()>k)
             {
                 pq.pop();
             }
         }
        while(pq.size()>0)
        {
            pair<int,string>pi =pq.top();
        cout << pi.first<<" "<<pi.second;
          ans.push_back(pi.second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};