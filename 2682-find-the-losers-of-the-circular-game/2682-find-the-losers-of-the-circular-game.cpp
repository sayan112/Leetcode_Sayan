class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        // 1 2 3 4 5 
         unordered_map<int,int>mp;
              vector<int>ans;
         for(int i=1;i<=n;i++)
         {
             mp[i]++;
         }
         int start=1;
         int count =1;
          for(auto elem : mp)
         {
              cout << elem.first <<" "<< elem.second<<endl;
         }
         mp[start]++;
   
        while(true)
        {
              start +=count*k;
         
             if(start>n)
             {
                     start=start%n; 
                  if(start==0)
                  {
                       start=n;
                  }
             }
            cout << start<<endl;
           
            mp[start]++;
           
             if(mp[start]==3)
             {
                  break;
             }
             count++;  
            
        }
        cout <<endl;
         for(auto elem : mp)
         {
              cout << elem.first <<" "<< elem.second<<endl;
         }
   
        for(auto elem : mp)
        {
             if(elem.second==1)
             {
                  ans.push_back(elem.first);
             }
           
        }
         sort(ans.begin(),ans.end());
         return ans ;
    }
};