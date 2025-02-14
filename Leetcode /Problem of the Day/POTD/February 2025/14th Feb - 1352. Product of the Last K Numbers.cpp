class ProductOfNumbers {
private:
    vector<int> map;
public:
    ProductOfNumbers() {
        map.push_back(1);
    }
    
    void add(int num) {
        if(num==0) {
            map.clear();
            map.push_back(1);
        }
        else {
            map.push_back(num*map.back());
        }
    }
    
    int getProduct(int k) {
        if(k>=map.size()) {
            return 0;
        }
        return map.back() / map[map.size()-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
