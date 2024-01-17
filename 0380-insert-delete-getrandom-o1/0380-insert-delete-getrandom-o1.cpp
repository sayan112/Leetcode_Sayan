class RandomizedSet {
public:
 vector<int>vec;
   unordered_map<int,int>mp;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
        {
            return false;
        }
        else
        {
            vec.push_back(val);
             mp[val]= vec.size()-1;
              return true;
        }
        
    }
    
    bool remove(int val) {
           if(mp.find(val)==mp.end())
        {
            return false;
        }
        else{
             vec[mp[val]]=vec[vec.size()-1];
      mp[vec[vec.size()-1]]=mp[val];
      
      vec.pop_back();
      mp.erase(val);
       return true;
       
        }
    }
    
    int getRandom() {
        return vec[rand()%vec.size()];
    }
};
/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */