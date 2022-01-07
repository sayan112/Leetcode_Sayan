class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
            vector<int> arr(1002, 0);

       for (int i = 0; i < trips.size(); i++)
          {
         
                int need1 =  trips[i][0];
                int need2=  trips[i][1];
                 int need3 = trips[i][2];
           
                   arr[need2]+=need1;
                    arr[need3]-=need1;

                  
                  

             
             
          }
          
        
//           prefix sum 
        
       for (int i = 1; i <arr.size(); i++)
          {
        arr[i]+=arr[i-1];
       }
        
            for(auto elem : arr)
           {
            cout << elem << " " ; 
                 if(elem>capacity )
                 {
                      return false;
                 }
                
           }
        
         return true;
        

    
     
        
    }
};