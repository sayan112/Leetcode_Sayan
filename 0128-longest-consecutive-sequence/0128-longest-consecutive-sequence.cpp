class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int>st;
         for(auto elem: nums)
         {
              st.insert(elem);
         }
         int count =1;
         int longest=0;
         for(auto elem : nums)
         {
              if(st.find(elem-1)==st.end())
              {
                while(st.find(elem+1)!=st.end())
                {
                    count++;
                    elem++;
                }
                  longest=max(longest,count);
                  count=1;
                  
              }
         }
    
        return longest;
         
    }
};