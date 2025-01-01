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
    TreeNode* build(vector<int>& in, vector<int>& post, int inStart, int inEnd, int& index, unordered_map<int,int>& map)
    {
        if(inStart > inEnd) return nullptr;

        TreeNode* root = new TreeNode(post[index--]);
        int pos = map[root->val];

        root->right = build(in,post,pos+1,inEnd,index,map);
        root->left = build(in,post,inStart,pos-1,index,map);

        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int index = n-1;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) map[inorder[i]] = i;
        TreeNode* root = build(inorder,postorder,0,n-1,index,map);
        return root;
    }
};
