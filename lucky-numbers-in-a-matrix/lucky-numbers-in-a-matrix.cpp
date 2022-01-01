class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& m) {
        // [[1,10,4,2]
        //  [9,3,8,7],
        //  [15,16,17,12]]
        
        
        
        
        
        vector<int>h;
        vector <int>num;
        vector<int>ans;
         for(int  i=0 ; i <m.size(); i++ )
         {
              int mini =100000;
             int minIndex=-1;
                for(int  j=0 ; j <m[0].size(); j++ )
         {
               
                     if(mini>m[i][j])
                     {
                         mini= m[i][j];
                         minIndex=j;
                     }
         }
             h.push_back(mini);
             num.push_back(minIndex);
             
         }
        
        
        //  for(auto elem : h)
        //  {
        //      cout << elem  << " ";
        //  }
        //  for(auto elem : num)
        //  {
        //      cout << elem  << " ";
        //  }
        // cout <<endl;
       
        
        
       
      for(int j = 0 ; j < num.size(); j++)
      {
          
   
               int maxi=-10000;   
         for(int i =0; i <m.size(); i++ )
         {
             if(m[i][num[j]]>maxi)
             {
                 maxi=m[i][num[j]];
             }
         }
             if(maxi==h[j])
             {
               ans.push_back(h[j]);  
             }
           cout << maxi ;
        
         }
        
        return ans;
        
    }
        
        
        
        
        
        
        
    
};


 