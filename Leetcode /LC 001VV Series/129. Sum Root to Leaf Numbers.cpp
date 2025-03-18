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
    void sumRtoL(TreeNode* root, int sum, int& ans) {
        if(!root) return;

        if(!root->left && !root->right) {
            ans += (sum*10 + root->val);
            return;
        }

        sumRtoL(root->left,(sum*10+root->val),ans);
        sumRtoL(root->right,(sum*10+root->val),ans);
    }
public:
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        sumRtoL(root,0,ans);
        return ans;   
    }
};
