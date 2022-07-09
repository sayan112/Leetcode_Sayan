class Solution {
public:
     int  getrob(vector<int>& nums, int idx, unordered_map<int,int>&mp )
     {
          if(idx==0)
          {
             return  nums[idx];
          }
         if(idx<0)
         {
             return 0;
         }
          int currentkey=idx;
         if(mp.find(currentkey)!=mp.end())
         {
             return mp[currentkey];
         }
         int pick = nums[idx]+ getrob (nums,idx-2,mp);
         int non_pick= getrob (nums,idx-1,mp);
       mp[currentkey]=max(pick, non_pick);
          return  mp[currentkey];
     }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
             return nums[0];
        }
        unordered_map<int,int>mp;
        vector<int> firstoutvec;
        vector<int> lastoutvec;
         for (int i =1; i < nums.size();i++)
         {
             firstoutvec.push_back(nums[i]);
         }
          for (int i =0; i < nums.size()-1;i++)
         {
             lastoutvec.push_back(nums[i]);
         }
            for(auto elem : firstoutvec)
        {
            cout << elem <<" ";
        }
        for(auto elem : lastoutvec)
        {
            cout << elem <<" ";
        }
    cout <<endl;
        unordered_map<int,int>mp1;
int idx1=   firstoutvec.size()-1;
        int idx2=   lastoutvec.size()-1;
        
        cout <<  getrob (firstoutvec,idx1,mp)<< " "<<endl;
        cout << getrob (lastoutvec,idx2,mp)<<endl;
        
     return   max( getrob (firstoutvec,idx1,mp), getrob (lastoutvec,idx2,mp1)) ;
        
    }
};