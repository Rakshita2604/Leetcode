class MyHashMap {
public:
    int m[1000001];
    MyHashMap(){
        fill(m,m+1000000,-1);
        
    }
    
    void put(int key, int value) {
        m[key]=value;
    }
    
    int get(int key) {
        int ans=m[key];
        return ans;
    }
    
    void remove(int key) {
        m[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */