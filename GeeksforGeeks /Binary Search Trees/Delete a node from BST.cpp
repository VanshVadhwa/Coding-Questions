//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

Node* search(Node* root, int key) {
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
        return root;

    // Key is greater than root's key
    if (root->data < key)
        return search(root->right, key);

    // Key is smaller than root's key
    return search(root->left, key);
}

void inorder(Node* root, vector<int>& v) {
    if (root == NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}


// } Driver Code Ends
class Solution {
  public:
    // Function to delete a node from BST.
    Node *deleteNode(Node *root, int X) {
        // your code goes here
        if(!root) return nullptr;
        if(root->data == X)
        {
            // leaf node
            if(!root->left && !root->right) {
                delete root;
                return nullptr;
            }

            // if only one child exists
            if(!root->right) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            if(!root->left) {
                Node* temp = root->right;
                delete root;
                return temp;
            }

            // if both child exists
            // find the greatest element from left
            Node* child = root->left;
            Node* parent = root;

            while(child->right) {
                parent = child;
                child = child->right;
            }

            if(root != parent) {
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
            }
            else {
                child->right = root->right;
            }
            delete root;
            return child;
        }
        
        if(X < root->data) {
            root->left = deleteNode(root->left,X);
        }
        else {
            root->right = deleteNode(root->right,X);
        }

        return root;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    getchar();

    while (t--) {
        string s;
        getline(cin, s);
        Node* head = buildTree(s);

        int k;
        cin >> k;
        getchar();

        // Node* kNode = search( head, k );
        Solution obj;
        Node* suc = obj.deleteNode(head, k);

        vector<int> v;
        inorder(suc, v);
        for (auto i : v)
            cout << i << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
