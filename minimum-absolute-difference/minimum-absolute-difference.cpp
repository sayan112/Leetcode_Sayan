class Solution {
public:
        vector<vector<int>> findPair(vector<int>need, int n, int diff)
{
    // array is unsorted
             vector<vector<int>>vec;
  
 
    // take an empty set
    unordered_set<int> set;
 
    // do for every array element
    for (int i = 0; i < n; i++)
    {
        // check if pair with the given difference `(arr[i], arr[i]-diff)` exists
        if (set.find(need[i] - diff) != set.end()) {
            cout << "(" << need[i] << ", " << need[i] - diff<< ")\n";
                  vector<int>jk;
            jk.push_back(need[i]);
            jk.push_back(need[i] - diff);
                   sort(jk.begin(),jk.end());
            
                vec.push_back(jk);
            
        }
 
        // check if pair with the given difference `(arr[i]+diff, arr[i])` exists
        if (set.find(need[i] + diff) != set.end()) {
            cout << "(" << need[i] + diff << ", " << need[i] << ")\n";
                  vector<int>jk;
             jk.push_back( need[i] + diff );
            jk.push_back(need[i]);
                   sort(jk.begin(),jk.end());
            
              vec.push_back(jk);
            
        }
 
        // insert the current element into the set
        set.insert(need[i]);
       
    }
          
             return vec;
       
             
}
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>vec;
          sort(arr.begin(),arr.end());
         int n = arr.size();
         // for(auto elem : arr)
         // {
         //     cout << elem <<" ";
         // }
         
        int k = INT_MAX;
        
        //Finding the smallest Absolute Difference
        for(int i=0;i<arr.size()-1;i++)
        {
            k = min(k,abs(arr[i]-arr[i+1]));
        }
        vec=   findPair(arr,n,k);
        
        cout <<endl;
         return vec;

    }
};