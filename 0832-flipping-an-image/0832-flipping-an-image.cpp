class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
     
         for(auto &elem : image )
         {
            reverse(elem.begin(),elem.end());
         }
         for(auto &elem : image)
         {
                 for(auto &elem1 : elem)
         {
                      if(elem1==0)
                      {
                          elem1=1;
                      }
                     else{
                         elem1=0;
                     }
             
         }
         }
         return image;
    }
};