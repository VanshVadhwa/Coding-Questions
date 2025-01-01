//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Definition of the Node structure
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

// Function to print the tree in postorder traversal
void printPostOrder(Node *root) {
    if (root == NULL)
        return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}


// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  private:
    Node* build(vector<int>& preorder, vector<int>& inorder, 
    int inStart, int inEnd, int& index, unordered_map<int,int>& map)
    {
        if(inStart > inEnd) return nullptr;

        Node* curr = new Node(preorder[index]);
        int pos = map[preorder[index++]];

        curr->left = build(preorder,inorder,inStart,pos-1,index,map);
        curr->right = build(preorder,inorder,pos+1,inEnd,index,map);

        return curr;
    }
  public:
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // Code here
        int n = inorder.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) map[inorder[i]]=i;
        int index = 0;
        Node* head = build(preorder,inorder,0,n-1,index,map);
        return head;
    }
};

//{ Driver Code Starts.

// Main function where the test cases are handled
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> inorder, preorder;

        // Input the inorder traversal
        string input;
        getline(cin, input);
        stringstream ss1(input);
        int num;
        while (ss1 >> num)
            inorder.push_back(num);

        // Input the preorder traversal
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> num)
            preorder.push_back(num);

        // Create Solution object and build the tree
        Solution obj;
        Node *root = obj.buildTree(inorder, preorder);

        // Print the postorder traversal of the constructed tree
        printPostOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
