class Solution {
public:

int countVowelSubstrings(string w) {
    int n=w.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        unordered_map<char,int>mp;
        for(int j=i;j<n;j++)
        {
            if(w[j]=='a'||w[j]=='e'||w[j]=='i'||w[j]=='o'||w[j]=='u')
            {
             mp[w[j]]++;
             if(mp.size()==5)
             {
                   ans++;
             }
           
            }
            else
            {
                   break; 
            }
        
        } 
    } 
   return ans;
}
};