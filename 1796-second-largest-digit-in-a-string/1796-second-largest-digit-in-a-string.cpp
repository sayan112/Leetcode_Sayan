class Solution {
public:
    int secondHighest(string s) {
        vector<int>need;
         priority_queue<int> pq; 
         for(auto elem : s )
         {
              if(elem>='0'&& elem<='9')
              {
                 need.push_back(elem-'0');
                
              }
             
         }
        
        if(need.size()==0)
        {
             return -1;
        }
       sort(need.begin(),need.end());
         auto uniqueEnd =unique(need.begin(), need.end());
    // Erase the duplicate elements from the vector
    need.erase(uniqueEnd, need.end());
       
         if(need.size()==1)
         {
              return -1;
         }
         for(auto elem: need)
         {
                pq.push(elem);
         }
         //  while(!pq.empty())
         // {
         //      cout << pq.top()<<" ";
         //      pq.pop();
         // }
         int max_elem=pq.top();
         pq.pop();
         int max_2nd=pq.top();
    return max_2nd;
        

    }
};