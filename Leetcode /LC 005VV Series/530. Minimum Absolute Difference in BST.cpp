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
    int prev = -1, ans = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        if(!root) return ans;

        getMinimumDifference(root->left);
        if(prev != -1) {
            ans = min(ans, abs(root->val-prev));
        }
        prev = root->val;
        getMinimumDifference(root->right);

        return ans;
    }
};
