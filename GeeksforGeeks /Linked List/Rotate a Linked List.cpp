//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  private:
    int getLength(Node* head) {
        int ans = 0;
        while(head) {
            ans += 1;
            head = head->next;
        }
        return ans;
    }
  public:
    Node* rotate(Node* head, int k) {
        // Your code here
        if(!head || !head->next) return head;
        
        int n = getLength(head);
        k = k%n;
        if(k==0) return head;
        
        Node* curr = head;
        
        for(int i=0;i<k-1;i++) {
            curr = curr->next;
        }
        
        Node* newHead = curr->next;
        curr->next = nullptr;
        
        Node* temp = newHead;
        while(temp->next) {
            temp = temp->next;
        }
        
        temp->next = head;
        
        return newHead;
    
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
        cout << "~\n";
    }
    return 1;
}

// } Driver Code Ends
