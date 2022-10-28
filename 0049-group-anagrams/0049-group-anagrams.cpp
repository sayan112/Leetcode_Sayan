class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& sp) {
         vector<vector<string>>p;
        
        unordered_map<string, vector<string>>mp;
        
         for(auto elem :sp )
         {
             string need=elem; 
            sort(need.begin(),need.end());
             mp[need].push_back(elem);
         }
        
         for(auto elem : mp)
         {
           p.push_back(elem.second);
          
         }
        
        
        
        
        
         return p;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

// class Solution {
// public:
    
//     bool areAnagram(strs[i],strs[j](
//         {
//             string str1, string str2)
// {
//     // Get lengths of both strings
//     int n1 = str1.length();
//     int n2 = str2.length();
 
//     // If length of both strings is not same, then they
//     // cannot be anagram
//     if (n1 != n2)
//         return false;
 
//     // Sort both the strings
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
 
//     // Compare sorted strings
//     for (int i = 0; i < n1; i++)
//         if (str1[i] != str2[i])
//             return false;
 
//     return true;
// }
 
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//          vector<vector<string>>kp;
        
//         for(int i=0; i <strs.size();i++)
//         {
//              vector<int>need;
            
//               for(int j=0;j<strs.size();j++)
//         {
                  
//                   if(areAnagram(strs[i],strs[j] && i!=j )
//                      {
                        
//                          need.push_back(strs[j]);
//                          strs.erase(j);
//         }
                     
                     
//         }
//                      kp.push_back(need);
                     
        
        
//     }
// };




























