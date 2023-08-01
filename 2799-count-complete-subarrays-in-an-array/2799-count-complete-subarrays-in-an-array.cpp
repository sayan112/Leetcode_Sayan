class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int i=0;
         int j=0;
         unordered_map<int,int>mp;
    
        set<int> uniqueSet(nums.begin(),nums.end());
    
       int numberofUniqueelem=uniqueSet.size();
         // cout << numberofUniqueelem<<endl;
         int count =0;
         while(j<nums.size())
         {
             mp[nums[j]]++;
             
            while(mp.size() ==numberofUniqueelem){
                 count+=(nums.size()-j);
                                      mp[nums[i]]--;
                    
                      if( mp[nums[i]]==0)
                      {
                          mp.erase(nums[i]);
                      }
                      i++;
              
             }
                j++;
            
             
         }
        
         return count;
    }
};