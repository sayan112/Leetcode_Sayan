class MyHashSet {
public:
    vector<int>vec;
     int vecsize;
    MyHashSet() {
        vecsize=1000001;
        vec.resize(vecsize,0);
    }
    
    void add(int key) {
        vec[key]=1;
        
    }
    
    void remove(int key) {
        vec[key]=0;
        
    }
    
    bool contains(int key) {
        
        if(vec[key]==0)
        {
             return false;
        }
        else{
             return true;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */