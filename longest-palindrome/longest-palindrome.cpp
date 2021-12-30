class Solution {
public:
    int longestPalindrome(string s) {
     
  int n = s.size();
         if(n==1)
         {
              return 1 ; 
         }
        else{
          
             bool same = true;
        for (int i = 1; i < s.size(); i++)
 {
       if(s[i]!=s[0])
       {
            same = false;
       }
 }
             if(same)
             {
                  return n ; 
             }
            else{
                
          
            
            

unordered_map<char,int>mp;
 for (int i = 0; i < s.size(); i++)
 {
      mp[s[i]]++;
 }
   int ans =0;
  for(auto i : mp)
  {
    //    cout << elem.first << " " << elem.second <<endl ; 

  
       if(i.second % 2 == 0){
                ans += i.second;
            }
            else{
                ans += (i.second - 1);
            }
    

}

                 if(s.length() > ans){
            ans++;
        }
 
 return ans;
  }



            }

            
        
         
    }
};