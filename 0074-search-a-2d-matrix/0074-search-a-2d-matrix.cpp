class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto elem : matrix)
        {
            for(auto elem1:elem )
            {
                if(elem1==target)
                {
                     return true;
                }
            }
        }
         return false;
    }
};