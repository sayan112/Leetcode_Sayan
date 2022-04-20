class Solution {
public:
   
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
   // brute force ok :)
        
// for (int i = 0; i <nums.size(); i++)
// {
//    for (int j =i+1; j <nums.size(); j++)
//    {
//        int need=target-nums[i];
//        if(need==nums[j])
//        {
//            need1.push_back(i);
//            need1.push_back(j);
           
//        }
//    }
   
// }
//             return need1;
  
//     }
    
//      solution op 
    
    unordered_map<int,int>mp;   
        vector<int>need1;
        
            for(int i = 0; i<nums.size();i++)
     {
          int need = target-nums[i];
         if(mp.find(need)!=mp.end())
         {
            need1.push_back(i);
             need1.push_back(mp[need]);
             break;
         }
         
               mp[nums[i]] = i;
     }
         
            
     
    return  need1;
    
     }

    
    
};