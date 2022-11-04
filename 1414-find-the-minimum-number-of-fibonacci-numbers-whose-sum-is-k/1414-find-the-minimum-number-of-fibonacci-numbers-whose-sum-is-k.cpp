class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        
        vector<int>vec;
         vec.push_back(1);
          vec.push_back(1);
         for ( int i =2;i<=1000000;i++)
         {
              if(((vec[i-1]+vec[i-2]) >k))
                 {
                     break;
                 }
             vec.push_back(vec[i-1]+vec[i-2]);
              
         }
         
         int count=0;
               
         for(int i=vec.size()-1;i>0;i--)
         {
             cout << vec[i]<<" "<< k << " &"<<endl;
              if(vec[i]<=k)
              {
                  
                   cout << vec[i]<<" "<< k <<endl;
                  k-=vec[i];
                  count++;
              }
              if(k==0)
              {
                  break;
              }
           
             
         }
         return count;
    }
};