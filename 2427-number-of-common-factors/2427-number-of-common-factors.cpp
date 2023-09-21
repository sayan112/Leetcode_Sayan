class Solution {
public:
    void storeAllCommonFactor ( int num, vector<int>&nums,int idx)
    {
         if(idx>num)
         {
              return ;
         }
         if(num%idx==0)
         {
             nums.push_back(idx);
         }
        storeAllCommonFactor(num,nums,idx+1);
    }
    int commonFactors(int a, int b) {
        vector<int>facta;
        storeAllCommonFactor(a,facta,1);
             vector<int>factb;
        storeAllCommonFactor(b,factb,1);
        
        unordered_map<int,int>mp; 
         for(auto elem : facta)
         {
             mp[elem]++;
         }
        
         int count =0;
         for(auto elem : factb)
         {
             if(mp.find(elem)!=mp.end())
             {
                 count++;
             }
         }
         return count;
    }
};