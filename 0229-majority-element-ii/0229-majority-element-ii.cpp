class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   // we can apply boyre moore voting algo 
         int count1=0;
         int count2=0;
        int elem1=INT_MIN;
         int elem2=INT_MIN;
        for(auto elem : nums)
        {
            if(count1==0 && elem2!=elem)
            {
                count1++;
                elem1=elem;
            }
            else if(count2==0 && elem1!=elem)
            {
                count2++;
                elem2=elem;
            }
            else if(elem1==elem)
            {
                count1++;
            }
            else if(elem2==elem)
            {
                count2++;
            }
            else{
                count1--;
                count2--;
            }
            
        }
        vector<int>ans;
     count1 =0;
         count2=0;
         for(auto elem :nums)
         {
             if(elem==elem1)
             {
                 count1++;
             }
             else if(elem==elem2)
             {
                 count2++;
             }
         }
        if(count1>nums.size()/3)
        {
            ans.push_back(elem1);
        }
          if(count2>nums.size()/3)
        {
            ans.push_back(elem2);
        }
        return ans;
      
        
        
    }
};