class RandomizedSet {
private:
    unordered_map<int,int> map;
    vector<int> arr;
public:
    RandomizedSet() {}
    
    bool insert(int val) {
        if(map.count(val)) return false;
        map[val] = arr.size();
        arr.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(!map.count(val)) return false;
        int index = map[val];
        swap(arr[index], arr[arr.size() - 1]);
        map[arr[index]] = index;
        arr.pop_back();
        map.erase(val);
        return true;
    }
    
    int getRandom() {
        return arr[rand() % arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
