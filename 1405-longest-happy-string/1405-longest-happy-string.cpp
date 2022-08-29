class Solution
{
    public:
        string longestDiverseString(int a, int b, int c)
        {
            priority_queue<pair<int, char>> pq;
            if (a > 0)
            {
                pq.push({ a,
                    'a' });
            }
            if (b > 0)
            {
                pq.push({ b,
                    'b' });
            }
            if (c > 0)
            {
                pq.push({ c,
                    'c' });
            }
            string s="";
            int size =0;
            while (!pq.empty())
            {
                auto elem = pq.top();
                pq.pop();

                if (size > 1 && s[size - 1] == elem.second && s[size - 2] == elem.second)
                {
                    if(pq.empty())
                    {
                        return s;
                    }
                          s +=  pq.top().second;
                    auto secondhighestelem = pq.top();
              
                    size++;
                    pq.pop();

                    if (secondhighestelem.first > 1)
                    {
                        pq.push({ secondhighestelem.first - 1,
                            secondhighestelem.second });
                        
                    }
                      pq.push({ elem.first,
                        elem.second });

                  
                }
                else
                {

                    s += elem.second;
                    size++;
                    if (elem.first> 1)
                    {
                        pq.push({ elem.first - 1,
                            elem.second });
                    }
                }
            }
            return s;
        }
};