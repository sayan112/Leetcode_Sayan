class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& p) {
        unordered_map<int,int>mp; 
         vector<int>arr=p;
         sort(arr.begin(),arr.end());
         vector<int>k;
         // for ( auto elem : arr)
         // {
         //      cout << elem <<" ";
         // }
         // cout << endl;
         int count =0;
         for(int i =0; i< arr.size();i++)
         {
             
              if ( mp.find(arr[i])== mp.end())
              {
                   mp[arr[i]]=count+1;
              }
             else{
                 count--;
             }
             count++;
              
         }
              for(int i =0; i< arr.size();i++)
         {
             
         k.push_back(mp[p[i]]);
              
         }
        
    
         return k;
        
        
        
        
    }
};