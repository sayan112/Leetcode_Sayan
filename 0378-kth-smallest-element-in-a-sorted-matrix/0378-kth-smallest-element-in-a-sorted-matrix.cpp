class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
   vector<int>vec;
        for(auto elem : matrix)
        {
            for(auto elem1 : elem)
            {
                vec.push_back(elem1);
            }
        }
        
        sort(vec.begin(),vec.end());
        for(auto elem : vec)
        {
            cout <<elem<< " ";
        }
         return vec[k-1];
    }
};