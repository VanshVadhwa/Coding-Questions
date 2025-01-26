/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if(root -> val == key)
        {
            // leaf node
            if(!root->left && !root->right) {
                delete root;
                return nullptr;
            }

            // if only one child exists
            if(!root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            if(!root->left) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // if both child exists
            // find the greatest element from left
            TreeNode* child = root->left;
            TreeNode* parent = root;

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
        
        if(key < root->val) {
            root->left = deleteNode(root->left,key);
        }
        else {
            root->right = deleteNode(root->right,key);
        }

        return root;
    }
};
