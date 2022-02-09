class Solution {
public:
    vector <int> removedublicate (vector <int> v){ 
sort (v.begin (),v.end ()); 
 
    vector <int> v1; 
    for (int i=0;i <v.size ()-1;i++) 
         if ( v [i]!=v [i+1]) 
             v1.push_back (v [i])  ;
 if (v[v.size ()-1]!=v1[v1.size ()-1]) 
     v1.push_back (v[v.size ()-1]);  
return v1; 
} 
    
    int findPairs(vector<int>& num, int k) {
    
  
              if(k==0)
         {
                         unordered_map<int,int>mp;
        
         for(auto elem : num)
         {
              mp[elem]++;
         }
        
           int ct=0;
            for(auto elem : mp)
            {
                if(elem.second>1)
                {
                    ct++;
                }
            }
              return ct ; 
             
            
         }else{
                        int count =0;
         
                                       unordered_map<int,int>mp;
        
         for(auto elem : num)
         {
              mp[elem]++;
         }
        
             for(auto elem :mp)
             {
                  if(mp.find(elem.first+k)!=mp.end())
                  {
                       count++;
                  }
             }
                  
                  
                    return count ; 
                  
              }

          
  
   
      
    }
};