class Solution {
public:
      vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
      int  m = mat.size();
int n= mat[0].size();
vector<int>st;
multimap<int,int>mp;
 
int arr[10] = {-1};
 for (int i = 0; i < m ; i++)
    {
        int numberofone =0;
        for (int j = 0; j < n; j++)
        {
          if( mat[i][j]==1)
          {
          numberofone++;
          }
        }
          mp.insert(pair<int,int>(numberofone,i));

        
    }
    

int sun = 0 ; 
vector<int>realans;
for(auto elem : mp)
{
    if(sun<k)
    {
realans.push_back(elem.second) ; 
    }
    sun++;
    
}
 return realans;
      }
};