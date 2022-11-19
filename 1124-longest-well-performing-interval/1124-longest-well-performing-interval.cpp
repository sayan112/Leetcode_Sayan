class Solution {
public:
    int longestWPI(vector<int>& hours) {
     int tiringday=0;
         int nontiringday=0;
         int prefixsum=0;
         int result=0;
   
         unordered_map<int,int>mp;
         for(int i =0; i < hours.size();i++)
         { if(hours[i]>8)
         {
             prefixsum++;
         }
          else{
              prefixsum--;
          }
          
          if(prefixsum>0)
          {
              result=i+1;
          }
          else{
              if(mp.find(prefixsum-1)!=mp.end())
              {
                 result=max(result,i-mp[prefixsum-1]);
              }
          }
 if(mp.find(prefixsum)==mp.end())
 {
     mp[prefixsum]=i;
 }
          
            
         }
           return result;
    }
     
};