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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool level = true;
        
        while(!q.empty())
        {
            int n = q.size();
            vector<int> ans;
            while(n--) {
                TreeNode* curr = q.front();
                q.pop();
                
                if(level) st.push(curr->data);
                else ans.push_back(curr->data);
                
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            while(!st.empty()) {
                ans.push_back(st.top());
                st.pop();
            }
            level = !level;
        }
        
        return ans;
    }
};
