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
    int treeHeight(TreeNode* root) {
        int height = 0;
        while(root) {
            height += 1;
            root = root->left;
        }
        return height;
    }
public:
    int countNodes(TreeNode* root) {
        int nodes = 0, height = treeHeight(root);

        while(root) {
            if(treeHeight(root->right) == height-1) {
                nodes += 1 << (height-1);
                root = root->right;
            }
            else {
                nodes += 1 << (height-2);
                root = root->left;
            }
            height -= 1;
        }
        
        return nodes;
    }
};
