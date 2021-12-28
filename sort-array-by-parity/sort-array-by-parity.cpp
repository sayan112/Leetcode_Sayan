class Solution {
public:

vector<int> sortArrayByParity(vector<int>& A) {
     vector<int>v;
    
      for(auto elem : A)
      {
           if(elem % 2==0)
           {
               v.push_back(elem);
           }
      }
      for(auto elem : A)
      {
           if(elem % 2!=0)
           {
               v.push_back(elem);
           }
      }
     return v;
    
    
    
    
    
}};