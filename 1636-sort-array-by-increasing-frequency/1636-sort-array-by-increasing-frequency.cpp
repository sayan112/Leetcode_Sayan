class Solution 
{
public:
    class compare_fun
    {    
        public:
        bool operator()(pair<int, int> p1, pair<int, int> p2)/*this function is for the case where the frequency of elements are same*/ 
        {    
            if(p1.second==p2.second)
                return p1.first<p2.first;
            return p1.second>p2.second;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;

            for (int i = 0; i < nums.size(); i++)
            {
                mp[nums[i]]++;
            }

             priority_queue<pair<int, int>, vector<pair<int, int>>, compare_fun> pq;

            for (auto elem: mp)
            {
                pq.push({ 
                    elem.first,elem.second });
            }
        vector<int>ans ;
        while(pq.size()!=0)
        {
            
            auto elem =pq.top();
             while(elem.second--)
             {
                 ans.push_back(elem.first);
             }
            pq.pop();
            
        }
         return ans ;
        
    }
};