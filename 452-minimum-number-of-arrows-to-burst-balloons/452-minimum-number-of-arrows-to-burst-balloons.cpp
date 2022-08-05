bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end(),cmp);
        for(auto elem : points)
        {
            for(auto elem1: elem)
            {
                cout<<elem1<<" ";
            }
            cout<<endl;
        }
        int count =0;
        int check = points[0][1];
        for(int i =1; i < points.size();i++)
        {
         if(points[i][0]>check)
         {
             count++;
             check = points[i][1];
         }
        }
        
         return count+1;
    }
};