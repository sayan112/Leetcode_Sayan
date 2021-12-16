class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
             unordered_map<int,int>k;
         int n = ranges.size();
         int m = ranges[0].size();
          for (int i = 0; i < n ; i++)
          {
              for (int j = ranges[i][0]; j<= ranges[i][1]; j++)
              {
                 k[j]++;
              }
              cout <<endl;
              
          }
           for(auto elem : k)
           {
               cout <<elem.first <<" ";
           }
         
           for (int i = left; i <= right; i++)
           {
 bool noob= false;
                for(auto elem : k)
           {
              if(i==elem.first)
            {
                  noob= true;
            }

           }
            if(noob==false)
            {
                return false;
            }
            
           }
            return true;
           

  
    }
};