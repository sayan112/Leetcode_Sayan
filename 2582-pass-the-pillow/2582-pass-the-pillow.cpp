class Solution {
public:
    int passThePillow(int n, int time) {
        vector<int>vec;
        for(int i=1;i<=n;i++)
        {
            vec.push_back(i);
        }
         int count =0;
         while(time)
         {
           
              for(int i=1;i<=n;i++)
              {
                   
               if(i!=1)
               {
                       time--;
               }
                 
               
                     cout << i<<" "<<time<<endl;
                   if(time==0)
                   {
                        return i;
                   }
                  
              }
              for(int i=n;i>=1;i--)
                  
              {   
                 
                   if(i!=n)
                   {
                        time--;   
                   }
                  cout << i<<" "<<time<<endl;
                   if(time==0)
                   {
                        return i;
                   }
                  
              }
              count++;
         }
         return time++ ;
         
    }
};