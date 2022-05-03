class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,string>mp;
          vector<string>need;
         vector<int>need1= score;
        if(score.size()<=3)
        {
            vector<string>op;
            if(score.size()==1)
            {
                 op.push_back("Gold Medal");
                 return op;
            }
            else if (score.size()==2)
            {
                  vector<int>need1= score;
        sort(need1.begin(),need1.end(),greater<int>());
     
          mp[need1[0]]="Gold Medal";
                mp[need1[1]]="Silver Medal";
                  for(auto elem : score)
        {
            op.push_back(mp[elem]);
        }
                 return op;
                
            }
           else if (score.size()==3)
           {
                 vector<int>need1= score;
        sort(need1.begin(),need1.end(),greater<int>());
     
          mp[need1[0]]="Gold Medal";
                mp[need1[1]]="Silver Medal";
                 mp[need1[2]]="Bronze Medal";
                  for(auto elem : score)
        {
            op.push_back(mp[elem]);
        }
                return op;
             
           }
            
            
        }
        else{
            
      
        
           vector<int>need1= score;
        sort(need1.begin(),need1.end(),greater<int>());
     
        
           mp[need1[0]]="Gold Medal";
                mp[need1[1]]="Silver Medal";
              
                mp[need1[2]]="Bronze Medal";
              
              
          for(int i=3; i<score.size();i++)
          {
           mp[need1[i]]=to_string(i+1);
          }
       
        for(auto elem : score)
        {
            need.push_back(mp[elem]);
        }
        return need;
        
          }
            return need;
    }
};