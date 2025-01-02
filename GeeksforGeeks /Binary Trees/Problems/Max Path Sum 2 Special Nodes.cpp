/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
private:
    int pathSum(Node* root, int& ans) {
        if(!root) return 0;
        
        // if leaf node
        if(!root->left && !root->right) {
            return root->data;
        }
        
        int left = pathSum(root->left,ans);
        int right = pathSum(root->right,ans);
        
        // if both path exists
        if(root->right && root->left) {
            ans = max(ans, root->data + left + right);
            return root->data + max(left,right);
        }
        
        // if left exists
        if(root->left) {
            return root->data+left;
        }
        
        // if right exists
        if(root->right) {
            return root->data+right;
        }
    }
    
public:
    int maxPathSum(Node* root)
    {
        // code here
        int ans = INT_MIN;
        int val = pathSum(root,ans);
        
        if(root->left && root->right) return ans;
         
        return max(ans,val);
    }
};
