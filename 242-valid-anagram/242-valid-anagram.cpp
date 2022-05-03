class Solution {
public:
    bool isAnagram(string s, string a) {
//         if(s.size()!= a.size())
//         {
//             return false ;
//         }
//    unordered_map<char,int> up;
//         for (int i = 0; i < s.size(); i++)
//         {
//         up[s[i]]++;
//         up[a[i]]--;

//         }

    
//  for( auto elem : up  )
//  {
//    if(elem.second)
//    {
//           return false;
       
//    }

//  } 
//   return true;   
         sort(s.begin(),s.end());
         sort(a.begin(),a.end());
         if(s==a)
         {
              return true ; 
         }
        else{
             return false;
        }
    }
};