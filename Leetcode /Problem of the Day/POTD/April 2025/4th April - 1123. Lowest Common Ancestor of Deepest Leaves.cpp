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
    TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q) return root;

        TreeNode* left = LCA(root->left,p,q);
        TreeNode* right = LCA(root->right,p,q);

        if(left && right) return root;

        return left ? left : right;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        unordered_map<int,vector<TreeNode*>> map;
        queue<TreeNode*> q;
        q.push(root);
        int level = 1;

        while(!q.empty()) {
            int n = q.size();
            for(int i=0;i<n;i++) {
                TreeNode* curr = q.front();
                map[level].push_back(curr);
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            level += 1;
        }

        level -= 1;
        vector<TreeNode*>& deepest = map[level];
        TreeNode* ans = deepest[0];
        for(int i=1;i<deepest.size();i++) {
            ans = LCA(root,ans,deepest[i]);
        }

        return ans;
    }
};
