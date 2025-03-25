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
private:
    bool validate(TreeNode* root, long long leftVal, long long rightVal) {
        if(!root) return true;
        
        if(root->val <= leftVal || root->val >= rightVal) return false;

        bool left = validate(root->left, leftVal, root->val);
        bool right = validate(root->right, root->val, rightVal);

        return left && right;
    }
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        long long prev = LLONG_MIN, curr = LLONG_MAX;
        return validate(root,prev,curr);
    }
};
