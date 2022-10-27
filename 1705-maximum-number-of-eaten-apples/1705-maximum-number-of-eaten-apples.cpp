class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
         int day =1;
        int ans =0;
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq; 
        for(int i=0;i <apples.size();i++)
        {
        
            pq.push({days[i]+i , apples[i] });
            while(!pq.empty() && pq.top().first<day)
            {
                pq.pop();
            }
            if(pq.size())
            {
               auto elem=pq.top();
                pq.pop();
                elem.second--;
                ans++;
                if(elem.second>0)
                {
                    pq.push(elem);
                }
            }
             day++;
        }
        while(!pq.empty())
        {
             while(!pq.empty() && pq.top().first<day)
            {
                pq.pop();
            }
            if(pq.size())
            {
               auto elem=pq.top();
                pq.pop();
                elem.second--;
                ans++;
                if(elem.second>0)
                {
                    pq.push(elem);
                }
            }
             day++;
        }
         return ans ;
    }
};