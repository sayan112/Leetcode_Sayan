class Solution {
public:
    int count=0;
    
    vector<int> BFSvector(vector<int> adjlist[] , int n)
 {
     vector<int>visited(n,0);
      vector<int>BFSansvector;
      for (int i = 0; i <n ; i++)
      {
        if(!visited[i])
        {
            count++;
            queue<int>q;
            q.push(i);
            visited[i]=1;
             while (!q.empty())
             {
             int node=q.front();
             q.pop();
             BFSansvector.push_back(node);
             for(auto elem : adjlist[node])
             {
                if(!visited[elem])
                {
                    q.push(elem);
                     visited[elem]=1;
                }
             }
             }
        }
      }
       return BFSansvector;
      
 }
    int findCircleNum(vector<vector<int>>& isConnected) {
       int n = isConnected.size();
        
        vector<int>adjlist[n+1];
        
        for(int i =0; i <n;i++ )
        {
               for(int j=0; j<n;j++ )
        {
            if(isConnected[i][j]==1 && i!=j)
            {
                adjlist[i].push_back(j);
                 adjlist[j].push_back(i);
            }
               }
        }
        for(auto elem : adjlist)
        {
            for(auto elem1: elem)
            {
                cout << elem1<<" ";
            }
            cout<<endl;
        }
            
            
       BFSvector(adjlist,n);     
            
            return count;
            
        }
    
};