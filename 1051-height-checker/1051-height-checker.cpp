class Solution {
public:
    int heightChecker(vector<int>& heights) {
     
         int numberofIndx=0;
         vector<int>expected= heights;
         sort(expected.begin(),expected.end());
         for(int i =0;i<heights.size();i++)
         {
             if(heights[i]!=expected[i])
             {
                 numberofIndx++;
             }
         }
         return numberofIndx;
    }
};