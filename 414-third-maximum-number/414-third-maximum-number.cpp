class Solution {
public:
    int thirdMax(vector<int>& nums) {
   
       
           unordered_set<int>st;
         for(auto elem : nums)
         {
             st.insert(elem);
         }
        nums.clear();
         
        for(auto elem : st)
        {
          nums.push_back(elem);
            
        }
             if(nums.size()==1)
        {
            return nums[0];
        }
         if(nums.size()==2)
        {
            return max(nums[0],nums[1]);
        }
priority_queue <int, vector<int>, greater<int> > pq;
        
        for(auto elem : nums)
        {
            pq.push(elem );
             if(pq.size()>3)
             {
                 pq.pop();
             }
        }
         return pq.top();
    }
};