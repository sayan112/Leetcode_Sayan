class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string,int>mp;
         for(auto elem : arr)
         {
             mp[elem]++;
         }
        
         for(auto elem : arr)
         {
             if(mp.find(elem)!=mp.end())
             {
                 if(mp[elem]==1)
                 {
                      cout << elem <<" ";
                      if(k==1)
                      {
                          return elem;
                      }
                     k--;
                 }
             }
         }
         return "";
    }
};