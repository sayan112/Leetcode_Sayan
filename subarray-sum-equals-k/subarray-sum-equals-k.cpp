class Solution {
public:
    int subarraySum(vector<int>& vec, int k) {
        
     int count=0;

 unordered_map<int,int>mp;
         mp[0]++;
 int sum =0;
   for (int i = 0; i < vec.size(); i++)
   {
        sum+=vec[i];
         if(mp.find((sum-k))!=mp.end())
         {
              auto it = mp.find((sum-k));
             count+=it->second;
         }
      
              mp[sum]++;
         
         
   }
    return count;
   
    }
};