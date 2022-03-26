class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
        {
            return true;
        }
     
        
        int need= n ; 
        set<int>s;
          
        
        
        while(need!=1)
        {
            vector<int>p; 
        while(need!=0)
        {
            int k= need%10;
            p.push_back(k);
            need=need/10;
        }
             need=0;
        for(auto elem : p)
            
        {
           
            need+=elem*elem;
        }
            if(s.find(need)==s.end())
            {
                 s.insert(need);
            }
            else{
                return false;
                
            }
      
            
            
        }
           
            
        
        return true;
        
        
        
        
        
        
    }
};