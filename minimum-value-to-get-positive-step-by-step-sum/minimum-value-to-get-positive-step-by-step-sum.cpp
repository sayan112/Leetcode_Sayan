class Solution {
public:
    int minStartValue(vector<int>& l) {
        int k=0;
        int sumi=0;
        //  for(auto elem : l)
        //       {
        //          sumi+=elem;
        //       }
        // cout <<sumi;
       for (int i =1 ; i <3000; i++)
       {
            int sum=i;
          cout << sum ;
           bool k = false;
              for(auto elem : l)
              {
                 sum+=elem;
                   if(sum<=0)
                   {
                       k=true;
                   }
                 
              }
            if(!k)
            {
                 // cout << i <<endl;
                 return i;
            }
                
         
          
       }
        return 0;
    
        
    }
};