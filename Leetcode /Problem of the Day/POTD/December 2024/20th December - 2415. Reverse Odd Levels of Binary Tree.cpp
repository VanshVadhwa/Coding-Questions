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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> queue;
        queue.push(root);
        bool reversed = false;

        while(!queue.empty()) {
            int size = queue.size();
            vector<TreeNode*> temp(size);
            for(int i=0;i<size;i++) {
                TreeNode* node = queue.front();
                queue.pop();
                if(node->left) {
                    queue.push(node->left);
                }
                if(node->right) {
                    queue.push(node->right);
                }
                if(reversed) {
                    temp[i] = node;
                    if(i>=size/2)
                    swap(temp[i]->val,temp[size-i-1]->val);
                }
            }
            reversed = !reversed;
        }

        return root;
    }
};
