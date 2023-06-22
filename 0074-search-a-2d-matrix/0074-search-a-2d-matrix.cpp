class Solution {
public:
     bool search(vector<int>&vec , int target)
     {
        int start =0;
          int end = vec.size()-1;
          while(end>=start)
          {
               int mid = (end+start)/2;
              if(vec[mid]==target)
              {
                  return true;
              }
              else if(vec[mid]<target)
              {
                  start=mid+1;
              }
              else{
                  end=mid-1;
              }
          }
          return false;
     }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto elem : matrix)
        {
           if( search(elem,target)){
                return true;
           }
        }
         return false;
    }
};