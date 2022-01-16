class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
          int count=0;
             for (int i = 0; i < nums.size(); i++)
             {
                for (int j = i+1; j <nums.size(); j++)
                {
                if((nums[i] == nums[j]) && (i<j)  )
                {
                    count++;
                }
                }
                
             }
              return count;  
    }
};

//  0 1 2 3 4 5 
// [1,2,3,1,1,3]