class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>won;
          vector<int>loss;
       for(int i=0 ;i<matches.size();i++)
       {
           won.push_back(matches[i][0]);
           loss.push_back(matches[i][1]);
       
          
       }
        
          unordered_map<int,int>lp2;
        for(auto elem : loss)
        {
            lp2[elem]++;
        }
        
     
          vector<int>vec2;
              for(auto elem : lp2)
         {
            
                  if(elem.second==1)
                  {
                      vec2.push_back(elem.first);
                      
                  }
         }
        
        vector<int>vec;
      
        for(auto elem : won)
        {
            
            if(lp2.find(elem)==lp2.end())
            {
                vec.push_back(elem);
            }
        }
        
        sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
   
          sort( vec2.begin(), vec2.end() );
     vector<vector<int>>ans;
        ans.push_back(vec);
        ans.push_back(vec2);
        
        
        return ans;
        
        
        
        
        
    }
};