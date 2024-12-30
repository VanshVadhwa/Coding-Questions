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
    bool isCousins(TreeNode* root, int a, int b) {
        queue<pair<TreeNode*,TreeNode*>> q;
        q.push({root,nullptr});
        
        TreeNode* parentA = nullptr;
        TreeNode* parentB = nullptr;
        
        while(!q.empty())
        {
            int n = q.size();
            while(n--) {
                TreeNode* child = q.front().first;
                TreeNode* parent = q.front().second;
                q.pop();
                
                if(child->val==a) parentA = parent;
                if(child->val==b) parentB = parent;
                
                if(child->left) q.push({child->left,child});
                if(child->right) q.push({child->right,child});
            }
            
            if(parentA && parentB) {
                return parentA != parentB;
            }
            
            if(parentA || parentB) {
                return false;
            }
        }
        
        return false;
    }
};
