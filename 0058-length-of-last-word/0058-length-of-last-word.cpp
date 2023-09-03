class Solution {
public:
    int lengthOfLastWord(string s) {
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {

                s.pop_back();
            }
            else{
                 break;
            }
        }
         int ans =0;
         for(int i=s.size()-1;i>=0;i--)
         {
              if(s[i]==' ')
            {
                break;
            }
             else{
                 ans++;
             }
             
         }
        
         
         cout << s<<endl;
         return ans;
    }
};