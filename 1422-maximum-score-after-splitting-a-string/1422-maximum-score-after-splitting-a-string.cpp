class Solution {
public:
    
    int noofzero(string s )
    {
         int zero=0;
        for(auto elem : s)
        {
            if(elem=='0')
            {
            zero++;
            }
        }
         return zero;
    }
        int noofone(string s )
    {
         int one=0;
        for(auto elem : s)
        {
            if(elem=='1')
            {
            one++;
            }
        }
         return one;
    }
    
    int maxScore(string s) {
         int need =s.size(); 
         int ans =0;
        int maxi=0;
         for(int i=0; i < s.size()-1;i++)
         {
             string s1=s.substr(0, i+1);
             
              string s2=s.substr(i+1, (need-i));
            ans=noofone(s2)+noofzero(s1);
               maxi=max(maxi,ans);   
         }
        
         return maxi;
    }
};