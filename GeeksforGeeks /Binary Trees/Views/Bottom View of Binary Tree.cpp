/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  private:
    void find(Node* root, int pos, int& left, int& right) {
        if(!root) return;
        
        left = min(left,pos);
        right = max(right,pos);
        
        find(root->left,pos-1,left,right);
        find(root->right,pos+1,left,right);
    }
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        int left = INT_MAX;
        int right = INT_MIN;
        find(root,0,left,right);
        
        vector<int> ans(right-left+1,-1);
        queue<pair<Node*,int>> q;
        q.push({root,left*-1});
        
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                Node* curr = q.front().first;
                int index = q.front().second;
                q.pop();
                
                if(ans[index] == -1)
                ans[index] = curr->data;
                
                if(curr->left) {
                    q.push({curr->left,index-1});
                }
                if(curr->right) {
                    q.push({curr->right,index+1});
                }
            }
        }
        
        return ans;
    }
};
