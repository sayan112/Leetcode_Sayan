class Solution {
public:
    vector<int> storeAllCommonFactor ( int num)
    {
         vector<int>ans;
        for(int i =1;i<=num;i++)
        {
             if(num%i==0)
             {
                 ans.push_back(i);
             }
        }
         return ans ;
    }
    int commonFactors(int a, int b) {
        vector<int>facta=storeAllCommonFactor(a);
             vector<int>factb=storeAllCommonFactor(b);
        
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