class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
          int n = arr.size();
        vector<long long> ans(n);
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i<n; i++){
            mp[arr[i]].push_back(i);
        }
        for(auto itr : mp){
            vector<int> v = itr.second;
            int size = v.size();
            long long pre[size+1];
            pre[0] = 0;
            for(int i = 0; i<size; i++){
                pre[i+1] = (long long)pre[i] + (long long)v[i];
            
            }
            
            for(long long i = 0; i<size; i++){
                ans[v[i]] = i*v[i] - pre[i] + pre[size] - pre[i+1] - (size-i-1)*v[i];
            }
        }
        return ans;
    
    }
};