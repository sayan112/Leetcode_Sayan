// class Solution {
// public:
//     string getSmallestString(int n, int k) {
//         string s ; 
//          for(int i=0; i < n ; i++)
//          {
//              s+='a';
//          }
//         map<int,char>mp;
//         mp[1]='a';
//          mp[2]='b'; mp[3]='c'; mp[4]='d'; mp[5]='e'; mp[6]='f'; mp[7]='g'; mp[8]='h'; mp[9]='i'; mp[10]='j'; mp[11]='k'; mp[12]='l'; mp[13]='m'; mp[14]='n'; mp[15]='o'; mp[16]='p'; mp[17]='q'; mp[18]='r'; mp[19]='s'; mp[20]='t'; mp[21]='u'; mp[22]='v'; mp[23]='w'; mp[24]='x';
//          mp[25]='y';
//          mp[26]='z';
        
        
        
        
//         int need=k-n;
//                  for(int i=n-1; i>=0 ; i--)
//          {
//                     if(need>=26)
//                     {
//                         s+=mp[26];
//                         need--;
//                         need-=26;
//                     }
//                      else{
//                          s+=mp[]
//                      }
            
//          }
        
        
//     }
// };


class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        for(int i=0;i<n;i++)
            s+='a';
        k=k-n;
        for(int i=n-1;i>=0;i--)
        {
            if(k==0)
                break;
            else if(k<25)
            {
                s[i] = (char)('a'+k);          //using (char) to convert ASCII to respective character
                k=0;
            }
            else{
                s[i] = (char)('a'+25);
                k = k - 25;
            }
        }
        return s;
    }
};