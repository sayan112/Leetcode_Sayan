class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
        map<int,int>mp;
        for(auto elem : nums)
        {
            mp[elem]++;
       
        }
        
              nums.clear();
  
        
        int size=0;
          for(auto elem : mp)
        {
             
         
            if(elem.second==1)
            {
                nums.push_back(elem.first);
                       
                size++;
            }
              else if (elem.second>=2)
              {
                          
                    nums.push_back(elem.first);
                  
                   nums.push_back(elem.first);
                  size++;
                     size++;
              }
      
        
        
    }
         return size ;
    }
};