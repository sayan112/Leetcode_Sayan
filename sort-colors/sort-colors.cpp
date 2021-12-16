class Solution {
public:
    void sortColors(vector<int>& vec) {
          int lo=0,mid=0,hi=vec.size()-1;
        while(mid<=hi){
            if(vec[mid]==0){
                swap(vec[mid++],vec[lo++]);
            }
            else if(vec[mid]==1)
                mid++;
            else{
                swap(vec[mid],vec[hi--]);
            }
        }
    }
};