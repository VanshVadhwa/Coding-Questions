class NumberContainers {
public:
    unordered_map<int,int> map;
    unordered_map<int, priority_queue<int,vector<int>,greater<int>>> pq; 
    NumberContainers() {}
    
    void change(int index, int number) {
        if(map.count(index)) {
            if(map[index] == number) return;
            pq[map[index]].push(index);
        }
        map[index] = number;
        pq[number].push(index);
    }
    
    int find(int number) {
        if(pq.find(number) == pq.end()) return -1;

        while(!pq[number].empty()) {
            int index = pq[number].top();
            if(map[index] == number) return index;
            pq[number].pop();
        }

        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
