class Solution {
public:
      
        int getthecountofmincoins(vector<int>& coins, int amount, int currentIdx,unordered_map<string,int>&mp) {
                          if (amount == 0) {
            return 1;
        }
     
            
               if(coins.size()<=currentIdx)
        {
             return 0;
        }
                
            
     string currentKey = to_string(currentIdx) + "_" + to_string( amount);
if(mp.find(currentKey)!=mp.end()){
return mp[currentKey];
}
    
  
              int  pick=0;
        if(coins[currentIdx]<=amount)
        {
            
       
         pick = getthecountofmincoins(coins, amount - coins[currentIdx], currentIdx,mp);
        }
        int notpick = getthecountofmincoins(coins, amount, currentIdx + 1,mp);
            
              
            mp[currentKey]=(pick+notpick);
            
        return   mp[currentKey];
    }
    
    
    int change(int amount, vector<int>& coins) {
        unordered_map<string,int>mp;
        return getthecountofmincoins(coins,amount,0,mp);
    }
};