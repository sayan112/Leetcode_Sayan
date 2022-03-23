class Solution {
public:
    string getSmallestString(int n, int k) {
        string s ; 
         for(int i=0; i < n ; i++)
         {
             s+='a';
         }
        cout << s ; 
        map<int,char>mp;
        mp[1]='a';
         mp[2]='b'; mp[3]='c'; mp[4]='d'; mp[5]='e'; mp[6]='f'; mp[7]='g'; mp[8]='h'; mp[9]='i'; mp[10]='j'; mp[11]='k'; mp[12]='l'; mp[13]='m'; mp[14]='n'; mp[15]='o'; mp[16]='p'; mp[17]='q'; mp[18]='r'; mp[19]='s'; mp[20]='t'; mp[21]='u'; mp[22]='v'; mp[23]='w'; mp[24]='x';
         mp[25]='y';
         mp[26]='z';
        
        
        
        
        int need=k-n;
                 for(int i=n-1; i>=0 ; i--)
         {
                    if(need>=26)
                    {
                        s[i]=mp[26];
                        need++;
                        need-=26;
                    }
                     else{
                         need++;
                         s[i]=mp[need];
                         break;
                         
                     }
            
         }
         return s;
        
        
    }
};

