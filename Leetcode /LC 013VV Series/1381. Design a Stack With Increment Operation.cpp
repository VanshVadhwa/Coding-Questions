class CustomStack {
    int *arr;
    int top;
    int size;
public:
    CustomStack(int maxSize) {
        size = maxSize;
        top = -1;
        arr = new int[size];
    }
    
    void push(int x) {
        if(top==size-1) {
            return;
        }
        top++;
        arr[top] = x;
    }
    
    int pop() {
        if(top==-1) {
            return -1;
        }
        top--;
        return arr[top+1];
    }
    
    void increment(int k, int val) {
        int limit = min(k,top+1);
        for(int i=0;i<limit;i++) {
            arr[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
