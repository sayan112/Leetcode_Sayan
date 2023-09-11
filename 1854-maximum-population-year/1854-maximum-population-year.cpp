class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
         vector <int>years(101,0);
         int maxi =0;
        for(auto elem : logs)
        {
            years[elem[0]-1950]++;
            years[elem[1]-1950]--;
            
        }
        
      
          for(int i =1;i<years.size();i++)
          {
              years[i]+=years[i-1];
          }
          for(auto elem : years)
        {
             cout <<elem<<" ";
        }
         int startingyear=0;
        
        for(int i =0;i<years.size();i++)
        {
            if(maxi<years[i])
            {
                maxi=years[i];
                 startingyear=i;
                
            }
        }
         return startingyear+1950;
        
    }
};