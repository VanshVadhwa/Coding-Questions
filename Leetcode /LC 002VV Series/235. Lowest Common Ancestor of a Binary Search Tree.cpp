/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        int data = root->val;

        if(data > p->val && data > q->val) {
            return lowestCommonAncestor(root->left,p,q);
        }
        if(data < p->val && data < q->val) {
            return lowestCommonAncestor(root->right,p,q);
        }

        return root;
    }
};
