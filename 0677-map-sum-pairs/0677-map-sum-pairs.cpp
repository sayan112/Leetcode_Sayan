class MapSum {
public:
    unordered_map<string,int>mp;
   
    
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
         int sum=0;
        for(auto elem : mp)
        {
            if(elem.first.find(prefix)==0)
            {
                sum+=elem.second;
            }
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */