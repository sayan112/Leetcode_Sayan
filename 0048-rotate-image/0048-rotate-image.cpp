class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        for(int i =0;i<temp.size();i++)
        {
             for(int j =0;j<temp[0].size();j++)
        {
           matrix[i][j]=temp[j][i];
        } 
        }
        for(auto &elem : matrix)
        {
            
                reverse(elem.begin(),elem.end());
            
       
        }
    }
};