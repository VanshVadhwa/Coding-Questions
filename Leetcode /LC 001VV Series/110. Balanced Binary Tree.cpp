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
    int check(TreeNode* root, bool& valid) {
        if(!root) return 0;

        if(valid) {
            int left = check(root->left, valid);
            int right = check(root->right, valid);

            if(abs(left-right)>1) valid = false;

            return 1+max(left,right);
        }

        return -1; // kuch bhi to be honest :)
    }
public:
    bool isBalanced(TreeNode* root) {
        bool valid = true;
        check(root,valid);
        return valid;
    }
};
