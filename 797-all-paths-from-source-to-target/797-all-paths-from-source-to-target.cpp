class Solution {
public:
    void dfs(vector<vector<int>>&g, int currn,vector<bool>visited,int n ,vector<int>&currentP,vector<vector<int>>&ans){
        if(currn == n-1){
           
            ans.push_back(currentP);
            return;
        }
        
        if(visited[currn] == true){
            return;
        }
        
        visited[currn] = true;
        
        for(auto i : g[currn]){
            
            currentP.push_back(i);
            dfs(g,i,visited,n,currentP,ans);
                    currentP.pop_back();
        }
        
    

    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>ans;
        vector<int>curpath;
        curpath.push_back(0);
        vector<bool> v(n,false);
        dfs(graph,0,v,n,curpath,ans);
        return ans;
        }
};
