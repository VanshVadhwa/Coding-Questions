//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Linked list node structure */
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} * head;

/* Function to find a node in the list */
Node* findNode(Node* head, int search_for) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == search_for)
            return current;
        current = current->next;
    }
    return NULL;
}

/* Function to insert nodes from input */
void insert() {
    Node* temp;
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }

    int n = arr.size();
    if (n == 0)
        return; // No elements to insert

    head = new Node(arr[0]);
    temp = head;
    for (int i = 1; i < n; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
}

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
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
}*head;
*/

class Solution {
  public:
    // Function to delete a node without any reference to the head pointer.
    void deleteNode(Node* del_node) {
        // Your code here
        Node* temp = del_node->next;
        del_node->data = temp->data;
        del_node->next = temp->next;
        delete temp;
    }
};


//{ Driver Code Starts.

/* Driver program to test the above function */
int main() {
    int t, k;

    cin >> t;
    cin.ignore(); // To handle the newline character after `cin >> t`

    Solution ob;

    while (t--) {
        insert(); // Insert the nodes from the input
        cin >> k;
        cin.ignore(); // To handle the newline character after `cin >> k`

        Node* del = findNode(head, k); // Find the node to be deleted

        if (del != NULL && del->next != NULL) {
            ob.deleteNode(del); // Delete the node
            printList(head);    // Print the updated list
        } else if (del == NULL) {
            cout << "Node with value " << k << " not found." << endl;
        } else {
            cout << "Input does not follow the custom input conditions." << endl;
        }
    }

    return 0;
}

// } Driver Code Ends
