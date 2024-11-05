class Node {
    public:
    Node* next;
    int data;
    Node(int value) {
        data = value;
        next = NULL;
    }
};


class MinStack {
    Node* topi;
    Node* minTopi;
public:
    int mini = INT_MAX;
    MinStack() {
        topi = NULL;
        minTopi = NULL;
    }
    
    void push(int val) {
        Node* temp = new Node(val);
        temp->next = topi;
        topi = temp;
        
        int newMin = (minTopi==NULL) ? val : min(val,minTopi->data);
        Node* minTemp = new Node(newMin);
        minTemp->next = minTopi;
        minTopi = minTemp;
    }
    
    void pop() {
        Node* temp = topi;
        topi = topi->next;
        delete temp;

        Node* minTemp = minTopi;
        minTopi = minTopi->next;
        delete minTemp;
    }
    
    int top() {
        return topi->data;
    }
    
    int getMin() {
        return minTopi->data;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
