class Solution {
public:
    
    bool static cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
  

  
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
//         map<int,int>mp;
//          map<int,int>var;
        
//          for(auto elem : arr)
//          {
//              mp[elem]= abs(x-elem);
//              var[elem]++;
//          }
        
    
//             vector<pair<int, int> > A;
  
//     for (auto& it : mp) {
//         A.push_back(it);
//     }
 
//     sort(A.begin(), A.end(), cmp);
//          vector<int>ans;
//         int ct=0;
//           for (auto& it : A) {
//                int count= var[it.first];
//                for(int i=0; i< count;i++)
//                {
//                     ct++;                 
//                if(ct>k)
//                {
//                    break;
//                }
//                      ans.push_back(it.first);
                   
//                }
              
              
//     }
//          sort(ans.begin(),ans.end());
  
        
        
        
        priority_queue<pair<int,int>>pq;
      
         for(auto elem : arr)
         {
             pq.push({(abs(elem-x)),elem});
              if(pq.size()>k)
              {
                  pq.pop();
              }
         }
         vector<int>ans;
       while(pq.size()!=0)
         {
            auto elem = pq.top();
           
             ans.push_back(elem.second);
           pq.pop();
         }
         sort(ans.begin(),ans.end());
    return ans;
        
        

       
       
    }
        
       
        
    
};