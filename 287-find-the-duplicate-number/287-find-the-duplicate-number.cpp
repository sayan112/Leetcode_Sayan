class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_map<int,int>mp;
        
         for(auto elem : nums)
         {
             if(mp.find(elem)==mp.end())
             {
                    mp[elem]++;
             }
             else{
                  return elem;
             }
          
             
         }
        return -1;
      
    
    }
};