class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int>array(150,0);
         for(auto elem :  nums)
         {
            array[elem[0]]++;
             array[elem[1]+1]--;
         }

        cout <<endl;
           
         int ans =0;
      
        for(int i =1;i<array.size();i++)
        {
            array[i]+=array[i-1];     
            if( array[i])
            {
                ans++;
            }
        }
    
         return ans ;
        
         
        
    }
};