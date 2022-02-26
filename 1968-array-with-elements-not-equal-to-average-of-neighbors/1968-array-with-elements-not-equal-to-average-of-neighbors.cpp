class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
         // [1 , 2 ,3 , 4 ,5 ]
         // [1, 4,2,5, 3 ]
     
        int i=0; 
        vector<int>k;
         if(nums.size()%2==0)
         {
             
      
         while( i!= nums.size()/2)
         {
            k.push_back(nums[i]);
             k.push_back(nums[nums.size()/2 +i]);
             i++;
              
         }
                }
        else{
                  
         while( i!= nums.size()/2)
         {
            k.push_back(nums[i]);
             k.push_back(nums[nums.size()/2 +i+1]);
             i++;
              
         }
               if(nums.size()%2==1)
        {
            k.push_back(nums[nums.size()/2]);
        }
        }
     
         for(auto elem : k)
         {
             cout << elem;
             
         }
         return k;
        
        
        
    }
};