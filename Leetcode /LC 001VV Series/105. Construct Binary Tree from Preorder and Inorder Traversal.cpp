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
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd, int& index, unordered_map<int,int>& map)
    {
        if(inStart > inEnd) return nullptr;

        TreeNode* curr = new TreeNode(preorder[index]);
        int pos = map[preorder[index++]];

        curr->left = build(preorder,inorder,inStart,pos-1,index,map);


        return curr;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) map[inorder[i]]=i;
        int index = 0;
        TreeNode* head = build(preorder,inorder,0,n-1,index,map);
        return head;
    }
};
