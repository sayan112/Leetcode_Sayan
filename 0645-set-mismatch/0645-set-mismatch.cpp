class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      vector<int>need;
           vector<int>ans; 
  
        unordered_map<int,int>mp;
        for(auto elem : nums)
        {
            mp[elem]++;
        }
         for(auto elem :mp)
         {
             if(elem.second>=2)
             {
                ans.push_back(elem.first); 
             }
         }
        
        
         for(int i=1;i<=nums.size();i++)
         {
             need.push_back(i);
         }
    
          for(auto elem : need)
          {
              bool check=1;
              for(auto elem1 : nums)
              {
                   if(elem==elem1)
                   {
                       check=0;
                        break;
                   }
              }
               if(check==1)
               {
                   ans.push_back(elem);
               }
          }
        
     
return ans;
    }
};