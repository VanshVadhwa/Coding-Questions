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
    void find(TreeNode* root, TreeNode*& ans, int val) {
        if(!root) return;

        if(root->val == val) {
            ans = root;
            return;
        }

        else if(root->val < val) {
            find(root->right,ans,val);
        }
        else {
            find(root->left,ans,val);
        }
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = nullptr;
        find(root, ans, val);
        return ans;
    }
};
