class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
        {
            return  nums.size();
        }
    
        int diff = nums[1]-nums[0];
    
         int count =0;
         if(diff!=0)
         {
             count =2;
         }
        else{
      
                  count=1;
        }
         for(int i =2 ; i<nums.size();i++)
         {
             int tempdiff= nums[i]-nums[i-1];
             if(tempdiff>0 && diff<=0)
             {
                 diff=tempdiff;
                 count++;
                 
             }
             else if(tempdiff<0 && diff>=0)
             {
                  diff=tempdiff;
                 count++;
                
             }
              
         }
         return count ; 
        
    }
};