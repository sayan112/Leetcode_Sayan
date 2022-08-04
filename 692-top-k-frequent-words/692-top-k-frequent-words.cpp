  bool cmp(pair<string, int> &a,
            pair<string, int> &b)
        { 
      if(a.second==b.second)
        return a.first<b.first;
        return a.second>b.second;
          
        }
bool mycomp(string a, string b){
	//returns 1 if string a is alphabetically 
	//less than string b
	//quite similar to strcmp operation
	return a<b;
}
class Solution
{
    
    public:
    
    vector<string> topKFrequent(vector<string> &words, int count)
    {
    vector<string>ans;
    map<string, int>mp;
        for(auto elem : words)
        {
            mp[elem]++;
        }
      
        vector<pair<string, int> > A;
           for (auto& it : mp) {
        A.push_back(it);
    }
          sort(A.begin(), A.end(), cmp);
        for(auto elem : A)
        {
            cout << elem.first<<" "<<elem.second<<endl;
        }
        
         for(auto elem : A)
         {
             if(count!=0)
             {
                   ans.push_back(elem.first);
                 count--;
             }
             else{
                 break;
             }
        
             
         }
        // sort(ans.begin(),ans.end(),mycomp);
     
         return ans ; 
         
    }
};