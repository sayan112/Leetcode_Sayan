class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         for(auto elem : nums)
         {
           
         }
        int count =0;
         for(auto elem : nums)
         {
              
          int need = k-elem;
              if(mp.find(need)!= mp.end())
              {
                  
                  cout << need <<" "<< elem <<endl;
                  count++;
                  mp[elem]--;
                  mp[need]--;
                  if(mp[elem]<=0)
                  {
                      mp.erase(elem);
                      
                  }
                      if(mp[need]<=0)
                  {
                      mp.erase(need);
                      
                  }
              }
             else{
                  mp[elem]++;
                 
             }
             
         }
         return count;
        
        
        
        
    }
};