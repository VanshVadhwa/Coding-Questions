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
    int pathSum(TreeNode* root, int& ans) {
        if (!root) return 0;

        int left = max(0, pathSum(root->left, ans));  
        int right = max(0, pathSum(root->right, ans)); 

        // Update the global maximum path sum
        ans = max(ans, root->val + left + right);

        return root->val + max(left, right);
    }

public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN; 
        pathSum(root, ans);
        return ans;
    }
};
