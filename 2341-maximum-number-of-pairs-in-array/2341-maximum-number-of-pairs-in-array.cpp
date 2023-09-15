class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
             for(auto elem : nums)
             {
                 mp[elem]++;
             }
    
        int count=0;
         int remain=0;
        for(auto elem : mp)
        {
           if(elem.second%2==0)
           {
               count+=(elem.second/2);
           }
            else{
                  count+=(elem.second/2);
                remain++;
            }
        }
         nums.clear();
        nums.push_back(count);
          nums.push_back(remain);
         cout <<count<<" "<< remain <<endl;
         return nums;
    }
};