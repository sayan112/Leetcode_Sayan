class Solution
{
    public:

        void dfs(int node, vector<int> &visitedarry, vector<int> adjlist[])
        {
visitedarry[node]=1;
            for (auto elem: adjlist[node])
            {
                if (!visitedarry[elem])
                {
                    visitedarry[elem] = 1;
                    dfs(elem, visitedarry, adjlist);
                }
            }
        }

    int DFStraversal(vector<int> adjlist[], int n)
    {
        vector<int> visitedarray(n , 0);
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if (!visitedarray[i])
            {
                count++;
                dfs(i, visitedarray, adjlist);
            }
        }
        return count;
    }
    int findCircleNum(vector<vector < int>> &isConnected)
    {
        int n = isConnected.size();	// node size 

       	// at first make adjlist from matrix 
        vector<int> adjlist[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1 && i != j)
                {
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }

        return DFStraversal(adjlist, n);
    }
};