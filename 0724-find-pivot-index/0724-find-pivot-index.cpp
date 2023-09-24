class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         vector<int>right=nums;
         vector<int>left=nums;
        for(int i =1;i<left.size();i++)
        {
            left[i]+=left[i-1];
        }
              for(int i =right.size()-2;i<right.size();i--)
        {
            right[i]+=right[i+1];
        }
        for(auto elem : left)
        {
            cout << elem <<" ";
        }
        cout << endl;
            for(auto elem : right)
        {
            cout << elem <<" ";
        }
       for(int i =0;i<nums.size();i++)
       {
           if(right[i]==left[i])
           {
               return i;
           }
       }
         return -1;
    }
};