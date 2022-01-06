class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
            vector<int> arr(1002, 0);

       for (int i = 0; i < trips.size(); i++)
          {
             
           
                   arr[trips[i][1]]+=trips[i][0];
                    arr[ trips[i][2]]-=trips[i][0];  
             
          }
         
        
       for (int i = 1; i <arr.size(); i++)
          {
        arr[i]+=arr[i-1];
       }
        
            for(auto elem : arr)
           {
                
                 if(elem>capacity )
                 {
                      return false;
                 }
                
           }
        
         return true;
        

    
     
        
    }
};