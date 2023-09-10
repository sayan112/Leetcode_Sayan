class Solution
{
    public:
        string reorganizeString(string s)
        {
            string res = "";
            unordered_map<char, int> mp;
            for (auto elem: s)
            {
                mp[elem]++;
            }
            priority_queue<pair<int, char>> pq;
            for (auto elem: mp)
            {
                pq.push({ elem.second,
                    elem.first });
            }
            cout << pq.size();
            while (pq.size()>1)
            {
                auto top1 = pq.top();
                pq.pop();
                auto top2 = pq.top();
                pq.pop();
                res += top1.second;
                res += top2.second;
                top1.first--;
                top2.first--;
                if (top1.first > 0){ pq.push(top1);}
                if (top2.first > 0){ pq.push(top2);}
            }
            cout << pq.size();
            if(!pq.empty())
            {
                if(pq.top().first>1)
                {
                    return "";
                }
                else{
                    res+=pq.top().second;
                }
            }
            return res;
            
        }
};