class Solution {
public:
    vector<int> sumZero(int n) {
        // [1,-1,0]
        // [1,-1]
        vector<int>vec;
        if(n%2!=0)
        {
            int k = n/2;
             for(int i=1; i <=k ; i++)
             {
                    vec.push_back(i);
             }
               for(int i=1; i <=k ; i++)
             {
                    vec.push_back(i*-1);
             }
            vec.push_back(0);
            
          
            
        }
        else{
                  int k = n/2;
             for(int i=1; i <=k ; i++)
             {
                    vec.push_back(i);
             }
               for(int i=1; i <=k ; i++)
             {
                    vec.push_back(i*-1);
             }  
        }
         return vec;
        
        
        
    }
};