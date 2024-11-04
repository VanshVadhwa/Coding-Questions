// Stack class.
class Stack {
    int *arr;
    int size;
    int peek;
public:
    
    Stack(int capacity) {
        // Write your code here.
        size = capacity;
        peek = -1;
        arr = new int[capacity];
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int num) {
        // Write your code here.
        if(peek != size-1) {
            peek++;
            arr[peek] = num;
        }
    }

    int pop() {
        // Write your code here.
        if(peek != -1) {
            return arr[peek--];
        }
        return -1;
    }
    
    int top() {
        // Write your code here.
        if(peek != -1) {
            return arr[peek];
        }
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        return (peek==-1) ? 1 : 0;
    }
    
    int isFull() {
        // Write your code here.
        return (peek==size-1) ? 1 : 0;
    }
    
};
